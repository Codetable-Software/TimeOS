/* tests/unit/test-list.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef TESTS_UNIT_TEST_LIST_C_
#define TESTS_UNIT_TEST_LIST_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_test_list_state { uint64_t value; uint32_t flags; } timeos_test_list_state_t;
typedef int (*timeos_test_list_op_t)(void *ctx, uint64_t value);

static int timeos_test_list_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_test_list_init(timeos_test_list_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_test_list_step(timeos_test_list_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_test_list_default_op(state, state->value);
}

#endif /* TESTS_UNIT_TEST_LIST_C_ */
