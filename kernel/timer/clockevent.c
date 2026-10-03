/* kernel/timer/clockevent.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TIMER_CLOCKEVENT_C
#define TIMEOS_TIMER_CLOCKEVENT_C
#include <stdint.h>
#include <stddef.h>
typedef int (*timeos_ce_next_fn)(void *, uint64_t); typedef void (*timeos_ce_shutdown_fn)(void *);
typedef struct timeos_clockevent { const char *name; uint64_t min_delta_ns,max_delta_ns; timeos_ce_next_fn set_next_event; timeos_ce_shutdown_fn shutdown; void *ctx; struct timeos_clockevent *next; } timeos_clockevent_t;
static timeos_clockevent_t *timeos_clockevent_head;
static timeos_clockevent_t *timeos_clockevent_selected;
int timeos_clockevent_register(timeos_clockevent_t *ce){if(!ce||!ce->set_next_event)return -1;ce->next=timeos_clockevent_head;timeos_clockevent_head=ce;if(!timeos_clockevent_selected)timeos_clockevent_selected=ce;return 0;}
int timeos_clockevent_set_next_event(uint64_t ns){if(!timeos_clockevent_selected)return -1;if(ns<timeos_clockevent_selected->min_delta_ns||ns>timeos_clockevent_selected->max_delta_ns)return -2;return timeos_clockevent_selected->set_next_event(timeos_clockevent_selected->ctx,ns);}
void timeos_clockevent_shutdown(void){if(timeos_clockevent_selected&&timeos_clockevent_selected->shutdown)timeos_clockevent_selected->shutdown(timeos_clockevent_selected->ctx);}
#endif
