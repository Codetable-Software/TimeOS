/* kernel/lib/include/crc.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_LIB_INCLUDE_CRC_H_
#define KERNEL_LIB_INCLUDE_CRC_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_crc_value_t;
typedef struct timeos_crc_state {
    uint64_t value;
    uint32_t flags;
} timeos_crc_state_t;

static inline timeos_crc_value_t timeos_crc_read(const timeos_crc_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_LIB_INCLUDE_CRC_H_ */
