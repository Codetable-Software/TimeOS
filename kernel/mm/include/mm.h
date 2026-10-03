/* kernel/mm/include/mm.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_MM_INCLUDE_MM_H_
#define KERNEL_MM_INCLUDE_MM_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_mm_value_t;
typedef struct timeos_mm_state {
    uint64_t value;
    uint32_t flags;
} timeos_mm_state_t;

static inline timeos_mm_value_t timeos_mm_read(const timeos_mm_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_MM_INCLUDE_MM_H_ */
