/* kernel/ipc/include/ipc.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_IPC_INCLUDE_IPC_H_
#define KERNEL_IPC_INCLUDE_IPC_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_ipc_value_t;
typedef struct timeos_ipc_state {
    uint64_t value;
    uint32_t flags;
} timeos_ipc_state_t;

static inline timeos_ipc_value_t timeos_ipc_read(const timeos_ipc_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_IPC_INCLUDE_IPC_H_ */
