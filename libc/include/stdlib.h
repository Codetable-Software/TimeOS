/* libc/include/stdlib.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_INCLUDE_STDLIB_H_
#define LIBC_INCLUDE_STDLIB_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_stdlib_value_t;
typedef struct timeos_stdlib_state {
    uint64_t value;
    uint32_t flags;
} timeos_stdlib_state_t;

static inline timeos_stdlib_value_t timeos_stdlib_read(const timeos_stdlib_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* LIBC_INCLUDE_STDLIB_H_ */
