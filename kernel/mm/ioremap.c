/* kernel/mm/ioremap.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_MM_IOREMAP_C_
#define KERNEL_MM_IOREMAP_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_ioremap_state { uint64_t value; uint32_t flags; } timeos_ioremap_state_t;
typedef int (*timeos_ioremap_op_t)(void *ctx, uint64_t value);

static int timeos_ioremap_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_ioremap_init(timeos_ioremap_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_ioremap_step(timeos_ioremap_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_ioremap_default_op(state, state->value);
}

#endif /* KERNEL_MM_IOREMAP_C_ */
