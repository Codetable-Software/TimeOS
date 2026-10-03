/* kernel/thread/include/workqueue.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_THREAD_INCLUDE_WORKQUEUE_H_
#define KERNEL_THREAD_INCLUDE_WORKQUEUE_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_workqueue_value_t;
typedef struct timeos_workqueue_state {
    uint64_t value;
    uint32_t flags;
} timeos_workqueue_state_t;

static inline timeos_workqueue_value_t timeos_workqueue_read(const timeos_workqueue_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_THREAD_INCLUDE_WORKQUEUE_H_ */
