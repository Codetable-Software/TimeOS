/* libc/src/memcpy.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_memcpy
.type timeos_memcpy, @function
timeos_memcpy:
    xor %eax, %eax
    ret
