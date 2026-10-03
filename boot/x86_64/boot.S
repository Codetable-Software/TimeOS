/* boot/x86_64/boot.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_boot
.type timeos_boot, @function
timeos_boot:
    xor %eax, %eax
    ret
