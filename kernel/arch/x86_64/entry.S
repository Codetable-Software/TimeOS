/* kernel/arch/x86_64/entry.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_entry
.type timeos_entry, @function
timeos_entry:
    xor %eax, %eax
    ret
