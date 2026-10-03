/* servers/timed/timed.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef SERVERS_TIMED_TIMED_H_
#define SERVERS_TIMED_TIMED_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_timed_value_t;
typedef struct timeos_timed_state {
    uint64_t value;
    uint32_t flags;
} timeos_timed_state_t;

static inline timeos_timed_value_t timeos_timed_read(const timeos_timed_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* SERVERS_TIMED_TIMED_H_ */
