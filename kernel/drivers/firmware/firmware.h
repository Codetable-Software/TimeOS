/* kernel/drivers/firmware/firmware.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_FIRMWARE_FIRMWARE_H_
#define KERNEL_DRIVERS_FIRMWARE_FIRMWARE_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_firmware_value_t;
typedef struct timeos_firmware_state {
    uint64_t value;
    uint32_t flags;
} timeos_firmware_state_t;

static inline timeos_firmware_value_t timeos_firmware_read(const timeos_firmware_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_FIRMWARE_FIRMWARE_H_ */
