/* kernel/timer/tick-oneshot.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TICK_ENGINE_C
#define TIMEOS_TICK_ENGINE_C
#include <stdint.h>
typedef struct timeos_tick_state {uint64_t next_deadline_ns,last_ns;uint32_t hz,oneshot,nohz;} timeos_tick_state_t;
void timeos_tick_init(timeos_tick_state_t*s,uint32_t hz){if(!s)return;s->hz=hz?s->hz=hz:100;s->oneshot=1;s->nohz=1;s->last_ns=0;s->next_deadline_ns=1000000000ull/s->hz;}
void timeos_tick_program(timeos_tick_state_t*s,uint64_t now,uint64_t next){if(!s)return;s->last_ns=now;s->next_deadline_ns=next;}
int timeos_tick_expired(const timeos_tick_state_t*s,uint64_t now){return s&&now>=s->next_deadline_ns;}
#endif
