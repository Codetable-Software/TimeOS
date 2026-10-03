/* boot/x86_64/acpi-early.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef BOOT_X86_64_ACPI_EARLY_C_
#define BOOT_X86_64_ACPI_EARLY_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_acpi_early_state { uint64_t value; uint32_t flags; } timeos_acpi_early_state_t;
typedef int (*timeos_acpi_early_op_t)(void *ctx, uint64_t value);

static int timeos_acpi_early_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_acpi_early_init(timeos_acpi_early_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_acpi_early_step(timeos_acpi_early_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_acpi_early_default_op(state, state->value);
}

#endif /* BOOT_X86_64_ACPI_EARLY_C_ */
