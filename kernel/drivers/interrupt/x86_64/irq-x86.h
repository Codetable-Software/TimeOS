/* kernel/drivers/interrupt/x86_64/irq-x86.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_INTERRUPT_X86_64_IRQ_X86_H_
#define KERNEL_DRIVERS_INTERRUPT_X86_64_IRQ_X86_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_irq_x86_value_t;
typedef struct timeos_irq_x86_state {
    uint64_t value;
    uint32_t flags;
} timeos_irq_x86_state_t;

static inline timeos_irq_x86_value_t timeos_irq_x86_read(const timeos_irq_x86_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_INTERRUPT_X86_64_IRQ_X86_H_ */
