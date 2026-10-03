/* kernel/arch/arm64/include/sysreg-defs.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_ARCH_ARM64_INCLUDE_SYSREG_DEFS_H_
#define KERNEL_ARCH_ARM64_INCLUDE_SYSREG_DEFS_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_sysreg_defs_value_t;
typedef struct timeos_sysreg_defs_state {
    uint64_t value;
    uint32_t flags;
} timeos_sysreg_defs_state_t;

static inline timeos_sysreg_defs_value_t timeos_sysreg_defs_read(const timeos_sysreg_defs_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_ARCH_ARM64_INCLUDE_SYSREG_DEFS_H_ */
