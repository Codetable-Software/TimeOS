/* kernel/drivers/timer/arm64/timer-arm.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_TIMER_ARM64_TIMER_ARM_H_
#define KERNEL_DRIVERS_TIMER_ARM64_TIMER_ARM_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_timer_arm_value_t;
typedef struct timeos_timer_arm_state {
    uint64_t value;
    uint32_t flags;
} timeos_timer_arm_state_t;

static inline timeos_timer_arm_value_t timeos_timer_arm_read(const timeos_timer_arm_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_TIMER_ARM64_TIMER_ARM_H_ */
