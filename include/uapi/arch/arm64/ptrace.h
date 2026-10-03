/* include/uapi/arch/arm64/ptrace.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef INCLUDE_UAPI_ARCH_ARM64_PTRACE_H_
#define INCLUDE_UAPI_ARCH_ARM64_PTRACE_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_ptrace_value_t;
typedef struct timeos_ptrace_state {
    uint64_t value;
    uint32_t flags;
} timeos_ptrace_state_t;

static inline timeos_ptrace_value_t timeos_ptrace_read(const timeos_ptrace_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* INCLUDE_UAPI_ARCH_ARM64_PTRACE_H_ */
