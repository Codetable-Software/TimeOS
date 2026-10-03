/* kernel/mm/include/mempool.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_MM_INCLUDE_MEMPOOL_H_
#define KERNEL_MM_INCLUDE_MEMPOOL_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_mempool_value_t;
typedef struct timeos_mempool_state {
    uint64_t value;
    uint32_t flags;
} timeos_mempool_state_t;

static inline timeos_mempool_value_t timeos_mempool_read(const timeos_mempool_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_MM_INCLUDE_MEMPOOL_H_ */
