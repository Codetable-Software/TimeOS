/* libc/include/bits/syscall.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_INCLUDE_BITS_SYSCALL_H_
#define LIBC_INCLUDE_BITS_SYSCALL_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_syscall_value_t;
typedef struct timeos_syscall_state {
    uint64_t value;
    uint32_t flags;
} timeos_syscall_state_t;

static inline timeos_syscall_value_t timeos_syscall_read(const timeos_syscall_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* LIBC_INCLUDE_BITS_SYSCALL_H_ */
