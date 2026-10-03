/* kernel/fs/fcntl.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_FS_FCNTL_C_
#define KERNEL_FS_FCNTL_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_fcntl_state { uint64_t value; uint32_t flags; } timeos_fcntl_state_t;
typedef int (*timeos_fcntl_op_t)(void *ctx, uint64_t value);

static int timeos_fcntl_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_fcntl_init(timeos_fcntl_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_fcntl_step(timeos_fcntl_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_fcntl_default_op(state, state->value);
}

#endif /* KERNEL_FS_FCNTL_C_ */
