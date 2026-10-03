/* boot/common/memory-map.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef BOOT_COMMON_MEMORY_MAP_H_
#define BOOT_COMMON_MEMORY_MAP_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_memory_map_value_t;
typedef struct timeos_memory_map_state {
    uint64_t value;
    uint32_t flags;
} timeos_memory_map_state_t;

static inline timeos_memory_map_value_t timeos_memory_map_read(const timeos_memory_map_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* BOOT_COMMON_MEMORY_MAP_H_ */
