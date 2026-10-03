/* kernel/sched/sched.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_SCHED_SCHED_C_
#define KERNEL_SCHED_SCHED_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_sched_state { uint64_t value; uint32_t flags; } timeos_sched_state_t;
typedef int (*timeos_sched_op_t)(void *ctx, uint64_t value);

static int timeos_sched_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_sched_init(timeos_sched_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_sched_step(timeos_sched_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_sched_default_op(state, state->value);
}

#endif /* KERNEL_SCHED_SCHED_C_ */
