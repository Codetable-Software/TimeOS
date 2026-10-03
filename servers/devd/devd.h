/* servers/devd/devd.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef SERVERS_DEVD_DEVD_H_
#define SERVERS_DEVD_DEVD_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_devd_value_t;
typedef struct timeos_devd_state {
    uint64_t value;
    uint32_t flags;
} timeos_devd_state_t;

static inline timeos_devd_value_t timeos_devd_read(const timeos_devd_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* SERVERS_DEVD_DEVD_H_ */
