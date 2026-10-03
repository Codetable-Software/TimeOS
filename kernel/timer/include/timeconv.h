/* kernel/timer/include/timeconv.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_TIMER_INCLUDE_TIMECONV_H_
#define KERNEL_TIMER_INCLUDE_TIMECONV_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_timeconv_value_t;
typedef struct timeos_timeconv_state {
    uint64_t value;
    uint32_t flags;
} timeos_timeconv_state_t;

static inline timeos_timeconv_value_t timeos_timeconv_read(const timeos_timeconv_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_TIMER_INCLUDE_TIMECONV_H_ */
