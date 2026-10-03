/* userland/shell/builtin.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef USERLAND_SHELL_BUILTIN_C_
#define USERLAND_SHELL_BUILTIN_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_builtin_state { uint64_t value; uint32_t flags; } timeos_builtin_state_t;
typedef int (*timeos_builtin_op_t)(void *ctx, uint64_t value);

static int timeos_builtin_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_builtin_init(timeos_builtin_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_builtin_step(timeos_builtin_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_builtin_default_op(state, state->value);
}

#endif /* USERLAND_SHELL_BUILTIN_C_ */
