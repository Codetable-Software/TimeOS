/* kernel/lib/include/string.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_LIB_INCLUDE_STRING_H_
#define KERNEL_LIB_INCLUDE_STRING_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_string_value_t;
typedef struct timeos_string_state {
    uint64_t value;
    uint32_t flags;
} timeos_string_state_t;

static inline timeos_string_value_t timeos_string_read(const timeos_string_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_LIB_INCLUDE_STRING_H_ */
