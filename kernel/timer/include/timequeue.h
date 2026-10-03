/* kernel/timer/include/timequeue.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_TIMER_INCLUDE_TIMEQUEUE_H_
#define KERNEL_TIMER_INCLUDE_TIMEQUEUE_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_timequeue_value_t;
typedef struct timeos_timequeue_state {
    uint64_t value;
    uint32_t flags;
} timeos_timequeue_state_t;

static inline timeos_timequeue_value_t timeos_timequeue_read(const timeos_timequeue_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_TIMER_INCLUDE_TIMEQUEUE_H_ */
