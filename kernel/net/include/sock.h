/* kernel/net/include/sock.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_NET_INCLUDE_SOCK_H_
#define KERNEL_NET_INCLUDE_SOCK_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_sock_value_t;
typedef struct timeos_sock_state {
    uint64_t value;
    uint32_t flags;
} timeos_sock_state_t;

static inline timeos_sock_value_t timeos_sock_read(const timeos_sock_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_NET_INCLUDE_SOCK_H_ */
