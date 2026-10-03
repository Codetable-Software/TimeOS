/* kernel/arch/x86_64/isr.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_ARCH_X86_64_ISR_C_
#define KERNEL_ARCH_X86_64_ISR_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_isr_state { uint64_t value; uint32_t flags; } timeos_isr_state_t;
typedef int (*timeos_isr_op_t)(void *ctx, uint64_t value);

static int timeos_isr_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_isr_init(timeos_isr_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_isr_step(timeos_isr_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_isr_default_op(state, state->value);
}

#endif /* KERNEL_ARCH_X86_64_ISR_C_ */
