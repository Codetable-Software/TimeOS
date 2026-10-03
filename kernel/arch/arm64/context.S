/* kernel/arch/arm64/context.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_context
.type timeos_context, %function
timeos_context:
    mov x0, #0
    ret
