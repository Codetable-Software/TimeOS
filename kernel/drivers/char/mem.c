/* kernel/drivers/char/mem.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_CHAR_MEM_C_
#define KERNEL_DRIVERS_CHAR_MEM_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_mem_state { uint64_t value; uint32_t flags; } timeos_mem_state_t;
typedef int (*timeos_mem_op_t)(void *ctx, uint64_t value);

static int timeos_mem_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_mem_init(timeos_mem_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_mem_step(timeos_mem_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_mem_default_op(state, state->value);
}

#endif /* KERNEL_DRIVERS_CHAR_MEM_C_ */
