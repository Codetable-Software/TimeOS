/* kernel/sync/include/sync.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_SYNC_INCLUDE_SYNC_H_
#define KERNEL_SYNC_INCLUDE_SYNC_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_sync_value_t;
typedef struct timeos_sync_state {
    uint64_t value;
    uint32_t flags;
} timeos_sync_state_t;

static inline timeos_sync_value_t timeos_sync_read(const timeos_sync_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_SYNC_INCLUDE_SYNC_H_ */
