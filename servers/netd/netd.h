/* servers/netd/netd.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef SERVERS_NETD_NETD_H_
#define SERVERS_NETD_NETD_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_netd_value_t;
typedef struct timeos_netd_state {
    uint64_t value;
    uint32_t flags;
} timeos_netd_state_t;

static inline timeos_netd_value_t timeos_netd_read(const timeos_netd_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* SERVERS_NETD_NETD_H_ */
