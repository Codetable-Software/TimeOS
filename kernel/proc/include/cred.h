/* kernel/proc/include/cred.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_PROC_INCLUDE_CRED_H_
#define KERNEL_PROC_INCLUDE_CRED_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_cred_value_t;
typedef struct timeos_cred_state {
    uint64_t value;
    uint32_t flags;
} timeos_cred_state_t;

static inline timeos_cred_value_t timeos_cred_read(const timeos_cred_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_PROC_INCLUDE_CRED_H_ */
