#!/bin/sh
# toolchain/scripts/mkimg.sh | SPDX-License-Identifier: MIT
set -eu
ARCH="${1:-arm64}"; mkdir -p "build/arm64"; OUT="build/arm64/timeos-rpi4.img"; [ "$ARCH" = rpi4 ] || OUT="build/$ARCH/timeos.img"; dd if=/dev/zero of="$OUT" bs=1M count=64 status=none; printf "%s\n" "Created $OUT"
