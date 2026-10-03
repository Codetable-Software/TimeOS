/* boot/arm64/start.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_start
.type timeos_start, %function
timeos_start:
    mov x0, #0
    ret
