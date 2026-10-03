/* kernel/arch/arm64/include/arch.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_ARCH_ARM64_INCLUDE_ARCH_H_
#define KERNEL_ARCH_ARM64_INCLUDE_ARCH_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_arch_value_t;
typedef struct timeos_arch_state {
    uint64_t value;
    uint32_t flags;
} timeos_arch_state_t;

static inline timeos_arch_value_t timeos_arch_read(const timeos_arch_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_ARCH_ARM64_INCLUDE_ARCH_H_ */
