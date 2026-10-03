/* userland/coreutils/nproc.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef USERLAND_COREUTILS_NPROC_C_
#define USERLAND_COREUTILS_NPROC_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_nproc_state { uint64_t value; uint32_t flags; } timeos_nproc_state_t;
typedef int (*timeos_nproc_op_t)(void *ctx, uint64_t value);

static int timeos_nproc_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_nproc_init(timeos_nproc_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_nproc_step(timeos_nproc_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_nproc_default_op(state, state->value);
}

#endif /* USERLAND_COREUTILS_NPROC_C_ */
