/* include/uapi/arch/arm64/unistd.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef INCLUDE_UAPI_ARCH_ARM64_UNISTD_H_
#define INCLUDE_UAPI_ARCH_ARM64_UNISTD_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_unistd_value_t;
typedef struct timeos_unistd_state {
    uint64_t value;
    uint32_t flags;
} timeos_unistd_state_t;

static inline timeos_unistd_value_t timeos_unistd_read(const timeos_unistd_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* INCLUDE_UAPI_ARCH_ARM64_UNISTD_H_ */
