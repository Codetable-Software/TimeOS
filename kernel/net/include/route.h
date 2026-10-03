/* kernel/net/include/route.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_NET_INCLUDE_ROUTE_H_
#define KERNEL_NET_INCLUDE_ROUTE_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_route_value_t;
typedef struct timeos_route_state {
    uint64_t value;
    uint32_t flags;
} timeos_route_state_t;

static inline timeos_route_value_t timeos_route_read(const timeos_route_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_NET_INCLUDE_ROUTE_H_ */
