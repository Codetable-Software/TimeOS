/* kernel/irq/include/irqdesc.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_IRQ_INCLUDE_IRQDESC_H_
#define KERNEL_IRQ_INCLUDE_IRQDESC_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_irqdesc_value_t;
typedef struct timeos_irqdesc_state {
    uint64_t value;
    uint32_t flags;
} timeos_irqdesc_state_t;

static inline timeos_irqdesc_value_t timeos_irqdesc_read(const timeos_irqdesc_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_IRQ_INCLUDE_IRQDESC_H_ */
