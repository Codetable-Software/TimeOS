/* userland/shell/tsh.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef USERLAND_SHELL_TSH_H_
#define USERLAND_SHELL_TSH_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_tsh_value_t;
typedef struct timeos_tsh_state {
    uint64_t value;
    uint32_t flags;
} timeos_tsh_state_t;

static inline timeos_tsh_value_t timeos_tsh_read(const timeos_tsh_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* USERLAND_SHELL_TSH_H_ */
