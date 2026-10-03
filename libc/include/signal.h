/* libc/include/signal.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_INCLUDE_SIGNAL_H_
#define LIBC_INCLUDE_SIGNAL_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_signal_value_t;
typedef struct timeos_signal_state {
    uint64_t value;
    uint32_t flags;
} timeos_signal_state_t;

static inline timeos_signal_value_t timeos_signal_read(const timeos_signal_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* LIBC_INCLUDE_SIGNAL_H_ */
