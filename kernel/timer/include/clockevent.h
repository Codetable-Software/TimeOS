/* kernel/timer/include/clockevent.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_CLOCKEVENT_H
#define TIMEOS_CLOCKEVENT_H
#include <stdint.h>
typedef int (*timeos_clockevent_next_t)(void *,uint64_t); typedef void (*timeos_clockevent_shutdown_t)(void *);
typedef struct timeos_clockevent { const char *name; uint64_t min_delta_ns,max_delta_ns; timeos_clockevent_next_t set_next_event; timeos_clockevent_shutdown_t shutdown; void *ctx; } timeos_clockevent_t;
int timeos_clockevent_register(timeos_clockevent_t *ce); int timeos_clockevent_set_next_event(uint64_t ns); void timeos_clockevent_shutdown(void);
#endif
