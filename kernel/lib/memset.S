/* kernel/lib/memset.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_memset
.type timeos_memset, @function
timeos_memset:
    xor %eax, %eax
    ret
