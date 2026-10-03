/* kernel/include/arch/arm64/io.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_INCLUDE_ARCH_ARM64_IO_H_
#define KERNEL_INCLUDE_ARCH_ARM64_IO_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_io_value_t;
typedef struct timeos_io_state {
    uint64_t value;
    uint32_t flags;
} timeos_io_state_t;

static inline timeos_io_value_t timeos_io_read(const timeos_io_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_INCLUDE_ARCH_ARM64_IO_H_ */
