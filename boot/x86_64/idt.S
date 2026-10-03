/* boot/x86_64/idt.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_idt
.type timeos_idt, @function
timeos_idt:
    xor %eax, %eax
    ret
