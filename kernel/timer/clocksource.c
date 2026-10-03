/* kernel/timer/clocksource.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TIMER_CLOCKSOURCE_C
#define TIMEOS_TIMER_CLOCKSOURCE_C
#include <stdint.h>
#include <stddef.h>

typedef uint64_t (*timeos_clocksource_read_fn)(void *ctx);
typedef struct timeos_clocksource { const char *name; uint64_t mask; uint32_t mult, shift, rating; timeos_clocksource_read_fn read; void *ctx; struct timeos_clocksource *next; } timeos_clocksource_t;
static timeos_clocksource_t *timeos_clocksource_head;
static timeos_clocksource_t *timeos_clocksource_selected;
int timeos_clocksource_register(timeos_clocksource_t *cs) { if (!cs || !cs->read) return -1; cs->next=timeos_clocksource_head; timeos_clocksource_head=cs; if (!timeos_clocksource_selected || cs->rating > timeos_clocksource_selected->rating) timeos_clocksource_selected=cs; return 0; }
int timeos_clocksource_select(const char *name) { for (timeos_clocksource_t *p=timeos_clocksource_head;p;p=p->next) { if (!name || !p->name) continue; const char *a=p->name,*b=name; while (*a && *b && *a==*b){a++;b++;} if (!*a && !*b){timeos_clocksource_selected=p;return 0;} } return -1; }
uint64_t timeos_clocksource_read(void) { return timeos_clocksource_selected && timeos_clocksource_selected->read ? timeos_clocksource_selected->read(timeos_clocksource_selected->ctx) & timeos_clocksource_selected->mask : 0; }
const char *timeos_clocksource_name(void) { return timeos_clocksource_selected ? timeos_clocksource_selected->name : "none"; }
#endif
