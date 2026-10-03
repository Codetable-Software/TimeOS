/* kernel/include/timeos/rbtree.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_RBTREE_H
#define TIMEOS_RBTREE_H
#include <stdint.h>
typedef struct timeos_rb_node { struct timeos_rb_node *left,*right,*parent; unsigned char red; } timeos_rb_node_t;
typedef struct timeos_rb_root { timeos_rb_node_t *node; } timeos_rb_root_t;
static inline void timeos_rb_init(timeos_rb_root_t *r){if(r)r->node=0;}
static inline int timeos_rb_empty(const timeos_rb_root_t *r){return !r||!r->node;}
#endif
