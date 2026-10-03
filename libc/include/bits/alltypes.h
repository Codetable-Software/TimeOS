/* libc/include/bits/alltypes.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_INCLUDE_BITS_ALLTYPES_H_
#define LIBC_INCLUDE_BITS_ALLTYPES_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_alltypes_value_t;
typedef struct timeos_alltypes_state {
    uint64_t value;
    uint32_t flags;
} timeos_alltypes_state_t;

static inline timeos_alltypes_value_t timeos_alltypes_read(const timeos_alltypes_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* LIBC_INCLUDE_BITS_ALLTYPES_H_ */
