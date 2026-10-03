/* kernel/sync/include/rcu.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_SYNC_INCLUDE_RCU_H_
#define KERNEL_SYNC_INCLUDE_RCU_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_rcu_value_t;
typedef struct timeos_rcu_state {
    uint64_t value;
    uint32_t flags;
} timeos_rcu_state_t;

static inline timeos_rcu_value_t timeos_rcu_read(const timeos_rcu_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_SYNC_INCLUDE_RCU_H_ */
