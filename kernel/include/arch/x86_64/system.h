/* kernel/include/arch/x86_64/system.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_INCLUDE_ARCH_X86_64_SYSTEM_H_
#define KERNEL_INCLUDE_ARCH_X86_64_SYSTEM_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_system_value_t;
typedef struct timeos_system_state {
    uint64_t value;
    uint32_t flags;
} timeos_system_state_t;

static inline timeos_system_value_t timeos_system_read(const timeos_system_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_INCLUDE_ARCH_X86_64_SYSTEM_H_ */
