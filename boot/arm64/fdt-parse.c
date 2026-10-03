/* boot/arm64/fdt-parse.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef BOOT_ARM64_FDT_PARSE_C_
#define BOOT_ARM64_FDT_PARSE_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_fdt_parse_state { uint64_t value; uint32_t flags; } timeos_fdt_parse_state_t;
typedef int (*timeos_fdt_parse_op_t)(void *ctx, uint64_t value);

static int timeos_fdt_parse_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_fdt_parse_init(timeos_fdt_parse_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_fdt_parse_step(timeos_fdt_parse_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_fdt_parse_default_op(state, state->value);
}

#endif /* BOOT_ARM64_FDT_PARSE_C_ */
