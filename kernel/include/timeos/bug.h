/* kernel/include/timeos/bug.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_INCLUDE_TIMEOS_BUG_H_
#define KERNEL_INCLUDE_TIMEOS_BUG_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_bug_value_t;
typedef struct timeos_bug_state {
    uint64_t value;
    uint32_t flags;
} timeos_bug_state_t;

static inline timeos_bug_value_t timeos_bug_read(const timeos_bug_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_INCLUDE_TIMEOS_BUG_H_ */
