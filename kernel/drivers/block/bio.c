/* kernel/drivers/block/bio.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_BLOCK_BIO_C_
#define KERNEL_DRIVERS_BLOCK_BIO_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_bio_state { uint64_t value; uint32_t flags; } timeos_bio_state_t;
typedef int (*timeos_bio_op_t)(void *ctx, uint64_t value);

static int timeos_bio_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_bio_init(timeos_bio_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_bio_step(timeos_bio_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_bio_default_op(state, state->value);
}

#endif /* KERNEL_DRIVERS_BLOCK_BIO_C_ */
