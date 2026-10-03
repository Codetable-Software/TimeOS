/* kernel/arch/x86_64/include/processor-flags.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_ARCH_X86_64_INCLUDE_PROCESSOR_FLAGS_H_
#define KERNEL_ARCH_X86_64_INCLUDE_PROCESSOR_FLAGS_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_processor_flags_value_t;
typedef struct timeos_processor_flags_state {
    uint64_t value;
    uint32_t flags;
} timeos_processor_flags_state_t;

static inline timeos_processor_flags_value_t timeos_processor_flags_read(const timeos_processor_flags_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_ARCH_X86_64_INCLUDE_PROCESSOR_FLAGS_H_ */
