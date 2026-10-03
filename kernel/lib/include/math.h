/* kernel/lib/include/math.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_LIB_INCLUDE_MATH_H_
#define KERNEL_LIB_INCLUDE_MATH_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_math_value_t;
typedef struct timeos_math_state {
    uint64_t value;
    uint32_t flags;
} timeos_math_state_t;

static inline timeos_math_value_t timeos_math_read(const timeos_math_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_LIB_INCLUDE_MATH_H_ */
