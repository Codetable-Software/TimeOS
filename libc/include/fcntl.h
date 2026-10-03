/* libc/include/fcntl.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_INCLUDE_FCNTL_H_
#define LIBC_INCLUDE_FCNTL_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_fcntl_value_t;
typedef struct timeos_fcntl_state {
    uint64_t value;
    uint32_t flags;
} timeos_fcntl_state_t;

static inline timeos_fcntl_value_t timeos_fcntl_read(const timeos_fcntl_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* LIBC_INCLUDE_FCNTL_H_ */
