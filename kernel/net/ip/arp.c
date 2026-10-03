/* kernel/net/ip/arp.c | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_NET_IP_ARP_C_
#define KERNEL_NET_IP_ARP_C_

#include <stdint.h>
#include <stddef.h>

typedef struct timeos_arp_state { uint64_t value; uint32_t flags; } timeos_arp_state_t;
typedef int (*timeos_arp_op_t)(void *ctx, uint64_t value);

static int timeos_arp_default_op(void *ctx, uint64_t value) {
    (void)ctx;
    return value == UINT64_MAX ? -1 : 0;
}

int timeos_arp_init(timeos_arp_state_t *state) {
    if (!state) return -1;
    state->value = 0;
    state->flags = 0;
    return 0;
}

int timeos_arp_step(timeos_arp_state_t *state, uint64_t delta) {
    if (!state) return -1;
    state->value += delta;
    return timeos_arp_default_op(state, state->value);
}

#endif /* KERNEL_NET_IP_ARP_C_ */
