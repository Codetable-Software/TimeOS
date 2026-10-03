/* kernel/timer/hrtimer-queue.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_HRTIMER_C
#define TIMEOS_HRTIMER_C
#include <stdint.h>
#include <stddef.h>
typedef struct timeos_hrnode { struct timeos_hrnode *left,*right,*parent; uint64_t expires; uint8_t red; } timeos_hrnode_t;
typedef void (*timeos_hr_fn)(void *);
typedef struct timeos_hrtimer { timeos_hrnode_t node; uint64_t interval_ns; timeos_hr_fn function; void *data; uint32_t active; } timeos_hrtimer_t;
typedef struct timeos_hrqueue { timeos_hrnode_t *root; size_t count; } timeos_hrqueue_t;
static void timeos_hr_left_rotate(timeos_hrqueue_t *q,timeos_hrnode_t *x){timeos_hrnode_t*y=x->right;if(!y)return;x->right=y->left;if(y->left)y->left->parent=x;y->parent=x->parent;if(!x->parent)q->root=y;else if(x==x->parent->left)x->parent->left=y;else x->parent->right=y;y->left=x;x->parent=y;}
static void timeos_hr_right_rotate(timeos_hrqueue_t *q,timeos_hrnode_t*y){timeos_hrnode_t*x=y->left;if(!x)return;y->left=x->right;if(x->right)x->right->parent=y;x->parent=y->parent;if(!y->parent)q->root=x;else if(y==y->parent->left)y->parent->left=x;else y->parent->right=x;x->right=y;y->parent=x;}
static void timeos_hr_insert_node(timeos_hrqueue_t*q,timeos_hrnode_t*z){timeos_hrnode_t*y=0,*x=q->root;while(x){y=x;x=(z->expires<x->expires)?x->left:x->right;}z->parent=y;z->left=z->right=0;z->red=1;if(!y)q->root=z;else if(z->expires<y->expires)y->left=z;else y->right=z;q->count++;while(z->parent&&z->parent->red){timeos_hrnode_t*p=z->parent,*g=p->parent;if(p==g->left){timeos_hrnode_t*u=g->right;if(u&&u->red){p->red=0;u->red=0;g->red=1;z=g;}else{if(z==p->right){z=p;timeos_hr_left_rotate(q,z);p=z->parent;g=p->parent;}p->red=0;g->red=1;timeos_hr_right_rotate(q,g);}}else{timeos_hrnode_t*u=g->left;if(u&&u->red){p->red=0;u->red=0;g->red=1;z=g;}else{if(z==p->left){z=p;timeos_hr_right_rotate(q,z);p=z->parent;g=p->parent;}p->red=0;g->red=1;timeos_hr_left_rotate(q,g);}}}q->root->red=0;}
int timeos_hrtimer_start(timeos_hrqueue_t*q,timeos_hrtimer_t*t,uint64_t expires){if(!q||!t||!t->function)return -1;t->node.expires=expires;t->active=1;timeos_hr_insert_node(q,&t->node);return 0;}
timeos_hrtimer_t *timeos_hrtimer_peek(timeos_hrqueue_t*q){if(!q||!q->root)return 0;timeos_hrnode_t*n=q->root;while(n->left)n=n->left;return (timeos_hrtimer_t*)((char*)n-(size_t)&((timeos_hrtimer_t*)0)->node);}
void timeos_hrtimer_run_due(timeos_hrqueue_t*q,uint64_t now){timeos_hrtimer_t*t;while((t=timeos_hrtimer_peek(q))&&t->node.expires<=now){t->active=0;if(t->function)t->function(t->data);break;}}
#endif
