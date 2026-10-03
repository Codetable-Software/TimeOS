/* userland/coreutils/ls.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef USERLAND_COREUTILS_LS_C_
#define USERLAND_COREUTILS_LS_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_ls_state { uint64_t value; uint32_t flags; } timeos_ls_state_t;
typedef int (*timeos_ls_op_t)(void *ctx, uint64_t value);

static int timeos_ls_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_ls_init(timeos_ls_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_ls_step(timeos_ls_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_ls_default_op(state, state->value);
}

#endif /* USERLAND_COREUTILS_LS_C_ */
