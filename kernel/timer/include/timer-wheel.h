/* kernel/timer/include/timer-wheel.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TIMER_WHEEL_H
#define TIMEOS_TIMER_WHEEL_H
#include <stdint.h>
#define TIMEOS_WHEEL_LEVELS 5u
#define TIMEOS_WHEEL_SLOTS 64u
typedef void (*timeos_timer_fn)(void *); typedef struct timeos_timer_node {struct timeos_timer_node *next;uint64_t expires;timeos_timer_fn fn;void *data;unsigned char active;} timeos_timer_node_t; typedef struct timeos_timer_wheel {timeos_timer_node_t *slots[TIMEOS_WHEEL_LEVELS][TIMEOS_WHEEL_SLOTS];uint64_t jiffies;} timeos_timer_wheel_t;
int timeos_timer_wheel_add(timeos_timer_wheel_t*,timeos_timer_node_t*,uint64_t); void timeos_timer_wheel_tick(timeos_timer_wheel_t*);
#endif
