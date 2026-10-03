/* kernel/lib/div64.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_LIB_DIV64_C_
#define KERNEL_LIB_DIV64_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_div64_state { uint64_t value; uint32_t flags; } timeos_div64_state_t;
typedef int (*timeos_div64_op_t)(void *ctx, uint64_t value);

static int timeos_div64_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_div64_init(timeos_div64_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_div64_step(timeos_div64_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_div64_default_op(state, state->value);
}

#endif /* KERNEL_LIB_DIV64_C_ */
