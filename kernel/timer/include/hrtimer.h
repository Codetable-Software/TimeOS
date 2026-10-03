/* kernel/timer/include/hrtimer.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_HRTIMER_H
#define TIMEOS_HRTIMER_H
#include <stdint.h>
typedef struct timeos_hrnode {struct timeos_hrnode *left,*right,*parent;uint64_t expires;unsigned char red;} timeos_hrnode_t;
typedef void (*timeos_hr_fn)(void *);
typedef struct timeos_hrtimer {timeos_hrnode_t node;uint64_t interval_ns;timeos_hr_fn function;void *data;uint32_t active;} timeos_hrtimer_t;
typedef struct timeos_hrqueue {timeos_hrnode_t *root;uint64_t count;} timeos_hrqueue_t;
int timeos_hrtimer_start(timeos_hrqueue_t*,timeos_hrtimer_t*,uint64_t); timeos_hrtimer_t *timeos_hrtimer_peek(timeos_hrqueue_t*); void timeos_hrtimer_run_due(timeos_hrqueue_t*,uint64_t);
#endif
