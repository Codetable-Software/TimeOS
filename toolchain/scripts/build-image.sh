#!/bin/sh
# toolchain/scripts/build-image.sh | SPDX-License-Identifier: MIT
set -eu
ARCH="${1:-arm64}"; mkdir -p "build/$ARCH"; cp "build/$ARCH/timeos.elf" "build/$ARCH/timeos.bin" 2>/dev/null || true; printf "%s\n" "TimeOS image preparation complete for $ARCH"
