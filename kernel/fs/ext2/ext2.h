/* kernel/fs/ext2/ext2.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_FS_EXT2_EXT2_H_
#define KERNEL_FS_EXT2_EXT2_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_ext2_value_t;
typedef struct timeos_ext2_state {
    uint64_t value;
    uint32_t flags;
} timeos_ext2_state_t;

static inline timeos_ext2_value_t timeos_ext2_read(const timeos_ext2_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_FS_EXT2_EXT2_H_ */
