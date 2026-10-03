/* userland/coreutils/rm.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef USERLAND_COREUTILS_RM_C_
#define USERLAND_COREUTILS_RM_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_rm_state { uint64_t value; uint32_t flags; } timeos_rm_state_t;
typedef int (*timeos_rm_op_t)(void *ctx, uint64_t value);

static int timeos_rm_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_rm_init(timeos_rm_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_rm_step(timeos_rm_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_rm_default_op(state, state->value);
}

#endif /* USERLAND_COREUTILS_RM_C_ */
