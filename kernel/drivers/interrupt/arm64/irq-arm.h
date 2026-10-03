/* kernel/drivers/interrupt/arm64/irq-arm.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_INTERRUPT_ARM64_IRQ_ARM_H_
#define KERNEL_DRIVERS_INTERRUPT_ARM64_IRQ_ARM_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_irq_arm_value_t;
typedef struct timeos_irq_arm_state {
    uint64_t value;
    uint32_t flags;
} timeos_irq_arm_state_t;

static inline timeos_irq_arm_value_t timeos_irq_arm_read(const timeos_irq_arm_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_INTERRUPT_ARM64_IRQ_ARM_H_ */
