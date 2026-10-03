/* kernel/drivers/timer/x86_64/timer-x86.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_TIMER_X86_64_TIMER_X86_H_
#define KERNEL_DRIVERS_TIMER_X86_64_TIMER_X86_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_timer_x86_value_t;
typedef struct timeos_timer_x86_state {
    uint64_t value;
    uint32_t flags;
} timeos_timer_x86_state_t;

static inline timeos_timer_x86_value_t timeos_timer_x86_read(const timeos_timer_x86_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_TIMER_X86_64_TIMER_X86_H_ */
