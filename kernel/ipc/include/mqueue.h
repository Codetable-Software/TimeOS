/* kernel/ipc/include/mqueue.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_IPC_INCLUDE_MQUEUE_H_
#define KERNEL_IPC_INCLUDE_MQUEUE_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_mqueue_value_t;
typedef struct timeos_mqueue_state {
    uint64_t value;
    uint32_t flags;
} timeos_mqueue_state_t;

static inline timeos_mqueue_value_t timeos_mqueue_read(const timeos_mqueue_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_IPC_INCLUDE_MQUEUE_H_ */
