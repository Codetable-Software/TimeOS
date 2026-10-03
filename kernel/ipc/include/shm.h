/* kernel/ipc/include/shm.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_IPC_INCLUDE_SHM_H_
#define KERNEL_IPC_INCLUDE_SHM_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_shm_value_t;
typedef struct timeos_shm_state {
    uint64_t value;
    uint32_t flags;
} timeos_shm_state_t;

static inline timeos_shm_value_t timeos_shm_read(const timeos_shm_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_IPC_INCLUDE_SHM_H_ */
