/* kernel/include/arch/x86_64/msr.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_INCLUDE_ARCH_X86_64_MSR_H_
#define KERNEL_INCLUDE_ARCH_X86_64_MSR_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_msr_value_t;
typedef struct timeos_msr_state {
    uint64_t value;
    uint32_t flags;
} timeos_msr_state_t;

static inline timeos_msr_value_t timeos_msr_read(const timeos_msr_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_INCLUDE_ARCH_X86_64_MSR_H_ */
