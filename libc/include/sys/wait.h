/* libc/include/sys/wait.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_INCLUDE_SYS_WAIT_H_
#define LIBC_INCLUDE_SYS_WAIT_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_wait_value_t;
typedef struct timeos_wait_state {
    uint64_t value;
    uint32_t flags;
} timeos_wait_state_t;

static inline timeos_wait_value_t timeos_wait_read(const timeos_wait_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* LIBC_INCLUDE_SYS_WAIT_H_ */
