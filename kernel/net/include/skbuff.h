/* kernel/net/include/skbuff.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_NET_INCLUDE_SKBUFF_H_
#define KERNEL_NET_INCLUDE_SKBUFF_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_skbuff_value_t;
typedef struct timeos_skbuff_state {
    uint64_t value;
    uint32_t flags;
} timeos_skbuff_state_t;

static inline timeos_skbuff_value_t timeos_skbuff_read(const timeos_skbuff_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_NET_INCLUDE_SKBUFF_H_ */
