/* kernel/drivers/serial/uart.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_SERIAL_UART_H_
#define KERNEL_DRIVERS_SERIAL_UART_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_uart_value_t;
typedef struct timeos_uart_state {
    uint64_t value;
    uint32_t flags;
} timeos_uart_state_t;

static inline timeos_uart_value_t timeos_uart_read(const timeos_uart_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_SERIAL_UART_H_ */
