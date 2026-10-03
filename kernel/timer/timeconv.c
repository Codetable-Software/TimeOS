/* kernel/timer/timeconv.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TIMECONV_C
#define TIMEOS_TIMECONV_C
#include <stdint.h>
uint64_t timeos_ns_to_ms(uint64_t ns){return ns/1000000ull;} uint64_t timeos_ms_to_ns(uint64_t ms){return ms*1000000ull;} uint64_t timeos_ns_to_us(uint64_t ns){return ns/1000ull;} uint64_t timeos_us_to_ns(uint64_t us){return us*1000ull;}
uint64_t timeos_cycles_to_ns(uint64_t cycles,uint32_t mult,uint32_t shift){return shift?((cycles*mult)>>shift):cycles*mult;}
#endif
