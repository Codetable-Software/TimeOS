#!/bin/sh
# toolchain/scripts/flash.sh | SPDX-License-Identifier: MIT
set -eu
IMAGE="${1:-build/arm64/timeos-rpi4.img}"; DEVICE="${2:-/dev/sdX}"; printf "%s\n" "Flash command would write $IMAGE to $DEVICE"; [ -f "$IMAGE" ]
