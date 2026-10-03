/* kernel/include/arch/arm64/sysreg.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_INCLUDE_ARCH_ARM64_SYSREG_H_
#define KERNEL_INCLUDE_ARCH_ARM64_SYSREG_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_sysreg_value_t;
typedef struct timeos_sysreg_state {
    uint64_t value;
    uint32_t flags;
} timeos_sysreg_state_t;

static inline timeos_sysreg_value_t timeos_sysreg_read(const timeos_sysreg_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_INCLUDE_ARCH_ARM64_SYSREG_H_ */
