/* kernel/fs/include/pagecache.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_FS_INCLUDE_PAGECACHE_H_
#define KERNEL_FS_INCLUDE_PAGECACHE_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_pagecache_value_t;
typedef struct timeos_pagecache_state {
    uint64_t value;
    uint32_t flags;
} timeos_pagecache_state_t;

static inline timeos_pagecache_value_t timeos_pagecache_read(const timeos_pagecache_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_FS_INCLUDE_PAGECACHE_H_ */
