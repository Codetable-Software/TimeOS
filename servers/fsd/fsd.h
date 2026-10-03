/* servers/fsd/fsd.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef SERVERS_FSD_FSD_H_
#define SERVERS_FSD_FSD_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_fsd_value_t;
typedef struct timeos_fsd_state {
    uint64_t value;
    uint32_t flags;
} timeos_fsd_state_t;

static inline timeos_fsd_value_t timeos_fsd_read(const timeos_fsd_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* SERVERS_FSD_FSD_H_ */
