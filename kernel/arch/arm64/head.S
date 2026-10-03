/* kernel/arch/arm64/head.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_head
.type timeos_head, %function
timeos_head:
    mov x0, #0
    ret
