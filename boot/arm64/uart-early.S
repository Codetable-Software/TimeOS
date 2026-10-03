/* boot/arm64/uart-early.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_uart_early
.type timeos_uart_early, %function
timeos_uart_early:
    mov x0, #0
    ret
