/* libc/src/strlen.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_SRC_STRLEN_C_
#define LIBC_SRC_STRLEN_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_strlen_state { uint64_t value; uint32_t flags; } timeos_strlen_state_t;
typedef int (*timeos_strlen_op_t)(void *ctx, uint64_t value);

static int timeos_strlen_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_strlen_init(timeos_strlen_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_strlen_step(timeos_strlen_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_strlen_default_op(state, state->value);
}

#endif /* LIBC_SRC_STRLEN_C_ */
