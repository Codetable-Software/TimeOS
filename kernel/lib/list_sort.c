/* kernel/lib/list_sort.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_LIB_LIST_SORT_C_
#define KERNEL_LIB_LIST_SORT_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_list_sort_state { uint64_t value; uint32_t flags; } timeos_list_sort_state_t;
typedef int (*timeos_list_sort_op_t)(void *ctx, uint64_t value);

static int timeos_list_sort_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_list_sort_init(timeos_list_sort_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_list_sort_step(timeos_list_sort_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_list_sort_default_op(state, state->value);
}

#endif /* KERNEL_LIB_LIST_SORT_C_ */
