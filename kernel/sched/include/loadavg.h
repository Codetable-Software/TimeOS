/* kernel/sched/include/loadavg.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_SCHED_INCLUDE_LOADAVG_H_
#define KERNEL_SCHED_INCLUDE_LOADAVG_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_loadavg_value_t;
typedef struct timeos_loadavg_state {
    uint64_t value;
    uint32_t flags;
} timeos_loadavg_state_t;

static inline timeos_loadavg_value_t timeos_loadavg_read(const timeos_loadavg_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_SCHED_INCLUDE_LOADAVG_H_ */
