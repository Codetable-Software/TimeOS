/* boot/arm64/exception-vectors.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos_exception_vectors
.type timeos_exception_vectors, %function
timeos_exception_vectors:
    mov x0, #0
    ret
