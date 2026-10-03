#!/bin/sh
# toolchain/scripts/qemu-run.sh | SPDX-License-Identifier: MIT
set -eu
ARCH="${1:-x86_64}"; if [ "$ARCH" = x86_64 ]; then exec qemu-system-x86_64 -kernel build/x86_64/timeos.elf -serial stdio; else exec qemu-system-aarch64 -M virt -cpu cortex-a72 -nographic -kernel build/arm64/timeos.elf; fi
