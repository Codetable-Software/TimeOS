/* kernel/include/timeos/completion.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_INCLUDE_TIMEOS_COMPLETION_H_
#define KERNEL_INCLUDE_TIMEOS_COMPLETION_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_completion_value_t;
typedef struct timeos_completion_state {
    uint64_t value;
    uint32_t flags;
} timeos_completion_state_t;

static inline timeos_completion_value_t timeos_completion_read(const timeos_completion_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_INCLUDE_TIMEOS_COMPLETION_H_ */
