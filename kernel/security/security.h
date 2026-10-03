/* kernel/security/security.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_SECURITY_SECURITY_H_
#define KERNEL_SECURITY_SECURITY_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_security_value_t;
typedef struct timeos_security_state {
    uint64_t value;
    uint32_t flags;
} timeos_security_state_t;

static inline timeos_security_value_t timeos_security_read(const timeos_security_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_SECURITY_SECURITY_H_ */
