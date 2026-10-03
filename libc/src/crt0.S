/* libc/src/crt0.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_crt0
.type timeos_crt0, @function
timeos_crt0:
    xor %eax, %eax
    ret
