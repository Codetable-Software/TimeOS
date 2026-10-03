/* boot/common/multiboot2.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef BOOT_COMMON_MULTIBOOT2_H_
#define BOOT_COMMON_MULTIBOOT2_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_multiboot2_value_t;
typedef struct timeos_multiboot2_state {
    uint64_t value;
    uint32_t flags;
} timeos_multiboot2_state_t;

static inline timeos_multiboot2_value_t timeos_multiboot2_read(const timeos_multiboot2_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* BOOT_COMMON_MULTIBOOT2_H_ */
