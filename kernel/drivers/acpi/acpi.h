/* kernel/drivers/acpi/acpi.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_ACPI_ACPI_H_
#define KERNEL_DRIVERS_ACPI_ACPI_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_acpi_value_t;
typedef struct timeos_acpi_state {
    uint64_t value;
    uint32_t flags;
} timeos_acpi_state_t;

static inline timeos_acpi_value_t timeos_acpi_read(const timeos_acpi_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_ACPI_ACPI_H_ */
