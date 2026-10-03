/* kernel/sched/include/idle.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_SCHED_INCLUDE_IDLE_H_
#define KERNEL_SCHED_INCLUDE_IDLE_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_idle_value_t;
typedef struct timeos_idle_state {
    uint64_t value;
    uint32_t flags;
} timeos_idle_state_t;

static inline timeos_idle_value_t timeos_idle_read(const timeos_idle_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_SCHED_INCLUDE_IDLE_H_ */
