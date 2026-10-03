/* boot/arm64/mmu-early.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_mmu_early
.type timeos_mmu_early, %function
timeos_mmu_early:
    mov x0, #0
    ret
