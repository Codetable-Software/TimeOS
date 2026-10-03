/* kernel/drivers/block/block.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_BLOCK_BLOCK_H_
#define KERNEL_DRIVERS_BLOCK_BLOCK_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_block_value_t;
typedef struct timeos_block_state {
    uint64_t value;
    uint32_t flags;
} timeos_block_state_t;

static inline timeos_block_value_t timeos_block_read(const timeos_block_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_BLOCK_BLOCK_H_ */
