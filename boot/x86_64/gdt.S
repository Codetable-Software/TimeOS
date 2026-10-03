/* boot/x86_64/gdt.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_gdt
.type timeos_gdt, @function
timeos_gdt:
    xor %eax, %eax
    ret
