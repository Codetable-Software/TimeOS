/* kernel/arch/arm64/syscall-entry.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_syscall_entry
.type timeos_syscall_entry, %function
timeos_syscall_entry:
    mov x0, #0
    ret
