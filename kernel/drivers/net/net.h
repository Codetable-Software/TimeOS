/* kernel/drivers/net/net.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_NET_NET_H_
#define KERNEL_DRIVERS_NET_NET_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_net_value_t;
typedef struct timeos_net_state {
    uint64_t value;
    uint32_t flags;
} timeos_net_state_t;

static inline timeos_net_value_t timeos_net_read(const timeos_net_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_NET_NET_H_ */
