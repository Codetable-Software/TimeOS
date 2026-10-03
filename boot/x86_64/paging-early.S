/* boot/x86_64/paging-early.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_paging_early
.type timeos_paging_early, @function
timeos_paging_early:
    xor %eax, %eax
    ret
