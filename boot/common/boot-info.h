/* boot/common/boot-info.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef BOOT_COMMON_BOOT_INFO_H_
#define BOOT_COMMON_BOOT_INFO_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_boot_info_value_t;
typedef struct timeos_boot_info_state {
    uint64_t value;
    uint32_t flags;
} timeos_boot_info_state_t;

static inline timeos_boot_info_value_t timeos_boot_info_read(const timeos_boot_info_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* BOOT_COMMON_BOOT_INFO_H_ */
