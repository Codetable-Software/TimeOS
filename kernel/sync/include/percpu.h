/* kernel/sync/include/percpu.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_SYNC_INCLUDE_PERCPU_H_
#define KERNEL_SYNC_INCLUDE_PERCPU_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_percpu_value_t;
typedef struct timeos_percpu_state {
    uint64_t value;
    uint32_t flags;
} timeos_percpu_state_t;

static inline timeos_percpu_value_t timeos_percpu_read(const timeos_percpu_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_SYNC_INCLUDE_PERCPU_H_ */
