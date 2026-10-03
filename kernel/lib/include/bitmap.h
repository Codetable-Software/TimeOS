/* kernel/lib/include/bitmap.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_LIB_INCLUDE_BITMAP_H_
#define KERNEL_LIB_INCLUDE_BITMAP_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_bitmap_value_t;
typedef struct timeos_bitmap_state {
    uint64_t value;
    uint32_t flags;
} timeos_bitmap_state_t;

static inline timeos_bitmap_value_t timeos_bitmap_read(const timeos_bitmap_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_LIB_INCLUDE_BITMAP_H_ */
