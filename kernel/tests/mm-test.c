/* kernel/tests/mm-test.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_TESTS_MM_TEST_C_
#define KERNEL_TESTS_MM_TEST_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_mm_test_state { uint64_t value; uint32_t flags; } timeos_mm_test_state_t;
typedef int (*timeos_mm_test_op_t)(void *ctx, uint64_t value);

static int timeos_mm_test_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_mm_test_init(timeos_mm_test_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_mm_test_step(timeos_mm_test_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_mm_test_default_op(state, state->value);
}

#endif /* KERNEL_TESTS_MM_TEST_C_ */
