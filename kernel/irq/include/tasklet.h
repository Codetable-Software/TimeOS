/* kernel/irq/include/tasklet.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_IRQ_INCLUDE_TASKLET_H_
#define KERNEL_IRQ_INCLUDE_TASKLET_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_tasklet_value_t;
typedef struct timeos_tasklet_state {
    uint64_t value;
    uint32_t flags;
} timeos_tasklet_state_t;

static inline timeos_tasklet_value_t timeos_tasklet_read(const timeos_tasklet_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_IRQ_INCLUDE_TASKLET_H_ */
