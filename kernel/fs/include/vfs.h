/* kernel/fs/include/vfs.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_FS_INCLUDE_VFS_H_
#define KERNEL_FS_INCLUDE_VFS_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_vfs_value_t;
typedef struct timeos_vfs_state {
    uint64_t value;
    uint32_t flags;
} timeos_vfs_state_t;

static inline timeos_vfs_value_t timeos_vfs_read(const timeos_vfs_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_FS_INCLUDE_VFS_H_ */
