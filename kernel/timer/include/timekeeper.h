/* kernel/timer/include/timekeeper.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TIMEKEEPER_H
#define TIMEOS_TIMEKEEPER_H
#include <stdint.h>
typedef struct timeos_timekeeper {uint64_t cycle_last,mono_ns,wall_ns,boot_ns;uint32_t mult,shift;} timeos_timekeeper_t;
void timeos_timekeeper_init(timeos_timekeeper_t*,uint64_t,uint64_t); uint64_t timeos_timekeeper_update(timeos_timekeeper_t*,uint64_t); uint64_t timeos_timekeeper_monotonic(const timeos_timekeeper_t*); uint64_t timeos_timekeeper_wall(const timeos_timekeeper_t*); uint64_t timeos_timekeeper_boottime(const timeos_timekeeper_t*);
#endif
