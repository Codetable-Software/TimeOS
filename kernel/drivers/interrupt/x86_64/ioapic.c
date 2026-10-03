/* kernel/drivers/interrupt/x86_64/ioapic.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_INTERRUPT_X86_64_IOAPIC_C_
#define KERNEL_DRIVERS_INTERRUPT_X86_64_IOAPIC_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_ioapic_state { uint64_t value; uint32_t flags; } timeos_ioapic_state_t;
typedef int (*timeos_ioapic_op_t)(void *ctx, uint64_t value);

static int timeos_ioapic_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_ioapic_init(timeos_ioapic_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_ioapic_step(timeos_ioapic_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_ioapic_default_op(state, state->value);
}

#endif /* KERNEL_DRIVERS_INTERRUPT_X86_64_IOAPIC_C_ */
