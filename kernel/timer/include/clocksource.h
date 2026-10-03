/* kernel/timer/include/clocksource.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_CLOCKSOURCE_H
#define TIMEOS_CLOCKSOURCE_H
#include <stdint.h>
typedef uint64_t (*timeos_clocksource_read_t)(void *ctx);
typedef struct timeos_clocksource { const char *name; uint64_t mask; uint32_t mult,shift,rating; timeos_clocksource_read_t read; void *ctx; } timeos_clocksource_t;
int timeos_clocksource_register(timeos_clocksource_t *cs); int timeos_clocksource_select(const char *name); uint64_t timeos_clocksource_read(void); const char *timeos_clocksource_name(void);
#endif
