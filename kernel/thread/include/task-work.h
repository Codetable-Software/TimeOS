/* kernel/thread/include/task-work.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_THREAD_INCLUDE_TASK_WORK_H_
#define KERNEL_THREAD_INCLUDE_TASK_WORK_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_task_work_value_t;
typedef struct timeos_task_work_state {
    uint64_t value;
    uint32_t flags;
} timeos_task_work_state_t;

static inline timeos_task_work_value_t timeos_task_work_read(const timeos_task_work_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_THREAD_INCLUDE_TASK_WORK_H_ */
