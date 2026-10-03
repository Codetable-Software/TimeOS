/* kernel/tests/include/test.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_TESTS_INCLUDE_TEST_H_
#define KERNEL_TESTS_INCLUDE_TEST_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_test_value_t;
typedef struct timeos_test_state {
    uint64_t value;
    uint32_t flags;
} timeos_test_state_t;

static inline timeos_test_value_t timeos_test_read(const timeos_test_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_TESTS_INCLUDE_TEST_H_ */
