/* kernel/sched/switch-to.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_switch_to
.type timeos_switch_to, @function
timeos_switch_to:
    xor %eax, %eax
    ret
