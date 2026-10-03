/* kernel/drivers/acpi/madt.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_ACPI_MADT_C_
#define KERNEL_DRIVERS_ACPI_MADT_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_madt_state { uint64_t value; uint32_t flags; } timeos_madt_state_t;
typedef int (*timeos_madt_op_t)(void *ctx, uint64_t value);

static int timeos_madt_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_madt_init(timeos_madt_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_madt_step(timeos_madt_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_madt_default_op(state, state->value);
}

#endif /* KERNEL_DRIVERS_ACPI_MADT_C_ */
