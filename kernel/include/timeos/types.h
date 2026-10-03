/* kernel/include/timeos/types.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TIMEOS_TYPES_H
#define TIMEOS_TYPES_H
#include <stdint.h>
#include <stddef.h>
typedef uint64_t timeos_u64; typedef int64_t timeos_s64; typedef uint32_t timeos_u32; typedef int32_t timeos_s32; typedef uint16_t timeos_u16; typedef uint8_t timeos_u8; typedef uint64_t timeos_phys_addr_t; typedef uint64_t timeos_virt_addr_t;
typedef struct timeos_timespec { timeos_s64 tv_sec; long tv_nsec; } timeos_timespec_t;
#endif
