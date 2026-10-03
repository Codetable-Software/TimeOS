/* kernel/include/arch/arm64/pgtable.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_INCLUDE_ARCH_ARM64_PGTABLE_H_
#define KERNEL_INCLUDE_ARCH_ARM64_PGTABLE_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_pgtable_value_t;
typedef struct timeos_pgtable_state {
    uint64_t value;
    uint32_t flags;
} timeos_pgtable_state_t;

static inline timeos_pgtable_value_t timeos_pgtable_read(const timeos_pgtable_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_INCLUDE_ARCH_ARM64_PGTABLE_H_ */
