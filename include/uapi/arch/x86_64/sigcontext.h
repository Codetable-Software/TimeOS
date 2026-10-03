/* include/uapi/arch/x86_64/sigcontext.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef INCLUDE_UAPI_ARCH_X86_64_SIGCONTEXT_H_
#define INCLUDE_UAPI_ARCH_X86_64_SIGCONTEXT_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_sigcontext_value_t;
typedef struct timeos_sigcontext_state {
    uint64_t value;
    uint32_t flags;
} timeos_sigcontext_state_t;

static inline timeos_sigcontext_value_t timeos_sigcontext_read(const timeos_sigcontext_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* INCLUDE_UAPI_ARCH_X86_64_SIGCONTEXT_H_ */
