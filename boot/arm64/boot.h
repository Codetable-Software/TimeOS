/* boot/arm64/boot.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef BOOT_ARM64_BOOT_H_
#define BOOT_ARM64_BOOT_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_boot_value_t;
typedef struct timeos_boot_state {
    uint64_t value;
    uint32_t flags;
} timeos_boot_state_t;

static inline timeos_boot_value_t timeos_boot_read(const timeos_boot_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* BOOT_ARM64_BOOT_H_ */
