/* libc/include/dirent.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_INCLUDE_DIRENT_H_
#define LIBC_INCLUDE_DIRENT_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_dirent_value_t;
typedef struct timeos_dirent_state {
    uint64_t value;
    uint32_t flags;
} timeos_dirent_state_t;

static inline timeos_dirent_value_t timeos_dirent_read(const timeos_dirent_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* LIBC_INCLUDE_DIRENT_H_ */
