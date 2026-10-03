/* kernel/irq/include/irqdomain.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_IRQ_INCLUDE_IRQDOMAIN_H_
#define KERNEL_IRQ_INCLUDE_IRQDOMAIN_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_irqdomain_value_t;
typedef struct timeos_irqdomain_state {
    uint64_t value;
    uint32_t flags;
} timeos_irqdomain_state_t;

static inline timeos_irqdomain_value_t timeos_irqdomain_read(const timeos_irqdomain_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_IRQ_INCLUDE_IRQDOMAIN_H_ */
