/* libc/src/syscall-asm.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_syscall_asm
.type timeos_syscall_asm, @function
timeos_syscall_asm:
    xor %eax, %eax
    ret
