/* kernel/fs/include/fs.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_FS_INCLUDE_FS_H_
#define KERNEL_FS_INCLUDE_FS_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_fs_value_t;
typedef struct timeos_fs_state {
    uint64_t value;
    uint32_t flags;
} timeos_fs_state_t;

static inline timeos_fs_value_t timeos_fs_read(const timeos_fs_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_FS_INCLUDE_FS_H_ */
