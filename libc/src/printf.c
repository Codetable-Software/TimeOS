/* libc/src/printf.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_SRC_PRINTF_C_
#define LIBC_SRC_PRINTF_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_printf_state { uint64_t value; uint32_t flags; } timeos_printf_state_t;
typedef int (*timeos_printf_op_t)(void *ctx, uint64_t value);

static int timeos_printf_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_printf_init(timeos_printf_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_printf_step(timeos_printf_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_printf_default_op(state, state->value);
}

#endif /* LIBC_SRC_PRINTF_C_ */
