/* kernel/timer/tick-broadcast.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TICK_BROADCAST_C
#define TIMEOS_TICK_BROADCAST_C
#include <stdint.h>
#define TIMEOS_MAX_CPUS 256u
typedef struct timeos_tick_broadcast {uint64_t deadline[TIMEOS_MAX_CPUS];uint64_t online_mask[4];uint32_t count;} timeos_tick_broadcast_t;
void timeos_tick_broadcast_init(timeos_tick_broadcast_t*b){if(!b)return;for(unsigned i=0;i<TIMEOS_MAX_CPUS;i++)b->deadline[i]=UINT64_MAX;b->count=0;}
int timeos_tick_broadcast_enter(timeos_tick_broadcast_t*b,unsigned cpu,uint64_t deadline){if(!b||cpu>=TIMEOS_MAX_CPUS)return -1;b->deadline[cpu]=deadline;b->online_mask[cpu/64]|=1ull<<(cpu%64);b->count++;return 0;}
int timeos_tick_broadcast_due(const timeos_tick_broadcast_t*b,unsigned cpu,uint64_t now){return b&&cpu<TIMEOS_MAX_CPUS&&b->deadline[cpu]<=now;}
#endif
