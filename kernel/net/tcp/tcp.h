/* kernel/net/tcp/tcp.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_NET_TCP_TCP_H_
#define KERNEL_NET_TCP_TCP_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_tcp_value_t;
typedef struct timeos_tcp_state {
    uint64_t value;
    uint32_t flags;
} timeos_tcp_state_t;

static inline timeos_tcp_value_t timeos_tcp_read(const timeos_tcp_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_NET_TCP_TCP_H_ */
