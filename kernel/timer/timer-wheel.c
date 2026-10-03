/* kernel/timer/timer-wheel.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TIMER_WHEEL_C
#define TIMEOS_TIMER_WHEEL_C
#include <stdint.h>
#include <stddef.h>
#define TIMEOS_WHEEL_LEVELS 5u
#define TIMEOS_WHEEL_SLOTS 64u
typedef void (*timeos_timer_fn)(void *);
typedef struct timeos_timer_node { struct timeos_timer_node *next; uint64_t expires; timeos_timer_fn fn; void *data; uint8_t active; } timeos_timer_node_t;
typedef struct timeos_timer_wheel { timeos_timer_node_t *slots[TIMEOS_WHEEL_LEVELS][TIMEOS_WHEEL_SLOTS]; uint64_t jiffies; } timeos_timer_wheel_t;
static unsigned timeos_wheel_level(uint64_t delta){if(delta<(1ull<<6))return 0;if(delta<(1ull<<12))return 1;if(delta<(1ull<<18))return 2;if(delta<(1ull<<24))return 3;return 4;}
int timeos_timer_wheel_add(timeos_timer_wheel_t*w,timeos_timer_node_t*n,uint64_t expires){if(!w||!n||expires<w->jiffies)return -1;unsigned l=timeos_wheel_level(expires-w->jiffies);unsigned s=(unsigned)((expires>>(6*l))&(TIMEOS_WHEEL_SLOTS-1));n->expires=expires;n->active=1;n->next=w->slots[l][s];w->slots[l][s]=n;return 0;}
void timeos_timer_wheel_tick(timeos_timer_wheel_t*w){if(!w)return;w->jiffies++;unsigned s=(unsigned)(w->jiffies&(TIMEOS_WHEEL_SLOTS-1));timeos_timer_node_t*n=w->slots[0][s];w->slots[0][s]=0;while(n){timeos_timer_node_t*next=n->next;n->next=0;if(n->active&&n->expires<=w->jiffies){n->active=0;if(n->fn)n->fn(n->data);}else if(n->active)timeos_timer_wheel_add(w,n,n->expires);n=next;}}
#endif
