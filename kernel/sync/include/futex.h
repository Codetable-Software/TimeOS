/* kernel/sync/include/futex.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_SYNC_INCLUDE_FUTEX_H_
#define KERNEL_SYNC_INCLUDE_FUTEX_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_futex_value_t;
typedef struct timeos_futex_state {
    uint64_t value;
    uint32_t flags;
} timeos_futex_state_t;

static inline timeos_futex_value_t timeos_futex_read(const timeos_futex_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_SYNC_INCLUDE_FUTEX_H_ */
