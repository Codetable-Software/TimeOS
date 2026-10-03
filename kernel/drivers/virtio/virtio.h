/* kernel/drivers/virtio/virtio.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_VIRTIO_VIRTIO_H_
#define KERNEL_DRIVERS_VIRTIO_VIRTIO_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_virtio_value_t;
typedef struct timeos_virtio_state {
    uint64_t value;
    uint32_t flags;
} timeos_virtio_state_t;

static inline timeos_virtio_value_t timeos_virtio_read(const timeos_virtio_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_VIRTIO_VIRTIO_H_ */
