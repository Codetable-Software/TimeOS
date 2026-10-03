/* kernel/include/timeos/atomic.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_INCLUDE_TIMEOS_ATOMIC_H_
#define KERNEL_INCLUDE_TIMEOS_ATOMIC_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_atomic_value_t;
typedef struct timeos_atomic_state {
    uint64_t value;
    uint32_t flags;
} timeos_atomic_state_t;

static inline timeos_atomic_value_t timeos_atomic_read(const timeos_atomic_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_INCLUDE_TIMEOS_ATOMIC_H_ */
