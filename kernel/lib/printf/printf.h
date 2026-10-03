/* kernel/lib/printf/printf.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_LIB_PRINTF_PRINTF_H_
#define KERNEL_LIB_PRINTF_PRINTF_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_printf_value_t;
typedef struct timeos_printf_state {
    uint64_t value;
    uint32_t flags;
} timeos_printf_state_t;

static inline timeos_printf_value_t timeos_printf_read(const timeos_printf_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_LIB_PRINTF_PRINTF_H_ */
