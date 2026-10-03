/* userland/init/init.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef USERLAND_INIT_INIT_H_
#define USERLAND_INIT_INIT_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_init_value_t;
typedef struct timeos_init_state {
    uint64_t value;
    uint32_t flags;
} timeos_init_state_t;

static inline timeos_init_value_t timeos_init_read(const timeos_init_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* USERLAND_INIT_INIT_H_ */
