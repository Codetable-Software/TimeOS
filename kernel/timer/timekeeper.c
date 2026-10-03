/* kernel/timer/timekeeper.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TIMEKEEPER_C
#define TIMEOS_TIMEKEEPER_C
#include <stdint.h>
typedef struct timeos_timekeeper { uint64_t cycle_last,mono_ns,wall_ns,boot_ns; uint32_t mult,shift; } timeos_timekeeper_t;
void timeos_timekeeper_init(timeos_timekeeper_t*k,uint64_t cycles,uint64_t wall_ns){if(!k)return;k->cycle_last=cycles;k->mono_ns=0;k->wall_ns=wall_ns;k->boot_ns=0;k->mult=1;k->shift=0;}
static uint64_t timeos_delta_ns(const timeos_timekeeper_t*k,uint64_t now){uint64_t d=now-k->cycle_last;return k->shift?((d*k->mult)>>k->shift):d*k->mult;}
uint64_t timeos_timekeeper_update(timeos_timekeeper_t*k,uint64_t cycles){if(!k)return 0;uint64_t d=timeos_delta_ns(k,cycles);k->cycle_last=cycles;k->mono_ns+=d;k->wall_ns+=d;k->boot_ns+=d;return k->mono_ns;}
uint64_t timeos_timekeeper_monotonic(const timeos_timekeeper_t*k){return k?k->mono_ns:0;}
uint64_t timeos_timekeeper_wall(const timeos_timekeeper_t*k){return k?k->wall_ns:0;}
uint64_t timeos_timekeeper_boottime(const timeos_timekeeper_t*k){return k?k->boot_ns:0;}
#endif
