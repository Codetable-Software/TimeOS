/* kernel/net/include/netlink.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_NET_INCLUDE_NETLINK_H_
#define KERNEL_NET_INCLUDE_NETLINK_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_netlink_value_t;
typedef struct timeos_netlink_state {
    uint64_t value;
    uint32_t flags;
} timeos_netlink_state_t;

static inline timeos_netlink_value_t timeos_netlink_read(const timeos_netlink_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_NET_INCLUDE_NETLINK_H_ */
