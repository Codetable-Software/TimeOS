/* libc/include/stdbool.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_INCLUDE_STDBOOL_H_
#define LIBC_INCLUDE_STDBOOL_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_stdbool_value_t;
typedef struct timeos_stdbool_state {
    uint64_t value;
    uint32_t flags;
} timeos_stdbool_state_t;

static inline timeos_stdbool_value_t timeos_stdbool_read(const timeos_stdbool_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* LIBC_INCLUDE_STDBOOL_H_ */
