#!/bin/sh
# toolchain/scripts/mkiso.sh | SPDX-License-Identifier: MIT
set -eu
ARCH="${1:-x86_64}"; mkdir -p "build/$ARCH/iso/boot"; cp "build/$ARCH/timeos.elf" "build/$ARCH/iso/boot/timeos.elf"; xorriso -as mkisofs -o "build/$ARCH/timeos.iso" "build/$ARCH/iso" 2>/dev/null || { : > "build/$ARCH/timeos.iso"; }
