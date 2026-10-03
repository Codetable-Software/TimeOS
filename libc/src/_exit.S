/* libc/src/_exit.S | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
.section .text
.global timeos__exit
.type timeos__exit, @function
timeos__exit:
    xor %eax, %eax
    ret
