/* servers/fsd/fsd.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef SERVERS_FSD_FSD_C_
#define SERVERS_FSD_FSD_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_fsd_state { uint64_t value; uint32_t flags; } timeos_fsd_state_t;
typedef int (*timeos_fsd_op_t)(void *ctx, uint64_t value);

static int timeos_fsd_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_fsd_init(timeos_fsd_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_fsd_step(timeos_fsd_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_fsd_default_op(state, state->value);
}

#endif /* SERVERS_FSD_FSD_C_ */
