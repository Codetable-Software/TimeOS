/* boot/x86_64/long-mode.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_long_mode
.type timeos_long_mode, @function
timeos_long_mode:
    xor %eax, %eax
    ret
