/* kernel/arch/x86_64/vmlinux.lds.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_vmlinux_lds
.type timeos_vmlinux_lds, @function
timeos_vmlinux_lds:
    xor %eax, %eax
    ret
