/* kernel/sched/include/sched-class.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_SCHED_INCLUDE_SCHED_CLASS_H_
#define KERNEL_SCHED_INCLUDE_SCHED_CLASS_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_sched_class_value_t;
typedef struct timeos_sched_class_state {
    uint64_t value;
    uint32_t flags;
} timeos_sched_class_state_t;

static inline timeos_sched_class_value_t timeos_sched_class_read(const timeos_sched_class_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_SCHED_INCLUDE_SCHED_CLASS_H_ */
