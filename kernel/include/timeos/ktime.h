/* kernel/include/timeos/ktime.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_KTIME_H
#define TIMEOS_KTIME_H
#include <stdint.h>
typedef int64_t timeos_ktime_t;
#define TIMEOS_NSEC_PER_SEC 1000000000LL
#define TIMEOS_NSEC_PER_MSEC 1000000LL
static inline timeos_ktime_t timeos_ktime_add(timeos_ktime_t a,timeos_ktime_t b){return a+b;}
static inline timeos_ktime_t timeos_ktime_sub(timeos_ktime_t a,timeos_ktime_t b){return a-b;}
#endif
