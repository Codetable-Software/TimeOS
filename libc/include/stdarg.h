/* libc/include/stdarg.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef LIBC_INCLUDE_STDARG_H_
#define LIBC_INCLUDE_STDARG_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_stdarg_value_t;
typedef struct timeos_stdarg_state {
    uint64_t value;
    uint32_t flags;
} timeos_stdarg_state_t;

static inline timeos_stdarg_value_t timeos_stdarg_read(const timeos_stdarg_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* LIBC_INCLUDE_STDARG_H_ */
