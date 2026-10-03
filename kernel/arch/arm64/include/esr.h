/* kernel/arch/arm64/include/esr.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_ARCH_ARM64_INCLUDE_ESR_H_
#define KERNEL_ARCH_ARM64_INCLUDE_ESR_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_esr_value_t;
typedef struct timeos_esr_state {
    uint64_t value;
    uint32_t flags;
} timeos_esr_state_t;

static inline timeos_esr_value_t timeos_esr_read(const timeos_esr_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_ARCH_ARM64_INCLUDE_ESR_H_ */
