/* include/uapi/arch/arm64/syscall-nr.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef INCLUDE_UAPI_ARCH_ARM64_SYSCALL_NR_H_
#define INCLUDE_UAPI_ARCH_ARM64_SYSCALL_NR_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_syscall_nr_value_t;
typedef struct timeos_syscall_nr_state {
    uint64_t value;
    uint32_t flags;
} timeos_syscall_nr_state_t;

static inline timeos_syscall_nr_value_t timeos_syscall_nr_read(const timeos_syscall_nr_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* INCLUDE_UAPI_ARCH_ARM64_SYSCALL_NR_H_ */
