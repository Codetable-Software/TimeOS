/* kernel/drivers/timer/x86_64/pit.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_TIMER_X86_64_PIT_C_
#define KERNEL_DRIVERS_TIMER_X86_64_PIT_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_pit_state { uint64_t value; uint32_t flags; } timeos_pit_state_t;
typedef int (*timeos_pit_op_t)(void *ctx, uint64_t value);

static int timeos_pit_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_pit_init(timeos_pit_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_pit_step(timeos_pit_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_pit_default_op(state, state->value);
}

#endif /* KERNEL_DRIVERS_TIMER_X86_64_PIT_C_ */
