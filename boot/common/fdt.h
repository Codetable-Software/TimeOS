/* boot/common/fdt.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef BOOT_COMMON_FDT_H_
#define BOOT_COMMON_FDT_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_fdt_value_t;
typedef struct timeos_fdt_state {
    uint64_t value;
    uint32_t flags;
} timeos_fdt_state_t;

static inline timeos_fdt_value_t timeos_fdt_read(const timeos_fdt_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* BOOT_COMMON_FDT_H_ */
