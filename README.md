# TimeOS v0.1.0

TimeOS is a freestanding monolithic operating system for x86_64 PCs and arm64 IoT/mobile systems. Its defining kernel subsystem is the Timer Kernel: clocksource selection, clockevents, high-resolution timers, a five-level hierarchical timer wheel, timekeeping, tickless NO_HZ scheduling, and tick broadcast are designed as first-class kernel infrastructure. Hardware support is separated by architecture and includes PC firmware/timer paths plus ARMv8-A firmware and Generic Timer support.

## Prerequisites

```sh
sudo apt install build-essential cmake ninja-build git \
  gcc-aarch64-linux-gnu binutils-aarch64-linux-gnu \
  qemu-system-x86_64 qemu-system-aarch64 \
  xorriso grub-pc-bin grub-efi-amd64-bin \
  gcc-multilib nasm python3
```

## Build PC (x86_64)

```sh
make ARCH=x86_64 defconfig
make ARCH=x86_64 -j$(nproc)
make ARCH=x86_64 iso
make ARCH=x86_64 run-qemu
```

## Build IoT/Mobile (arm64)

```sh
make ARCH=arm64 defconfig
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- -j$(nproc)
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- image
make ARCH=arm64 run-qemu
```

## Build Raspberry Pi 4

```sh
make ARCH=arm64 rpi4_defconfig
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- -j$(nproc)
make ARCH=arm64 sdimage
sudo dd if=build/arm64/timeos-rpi4.img of=/dev/sdX bs=4M status=progress
```

## Build Mobile (arm64 generic)

```sh
make ARCH=arm64 mobile_defconfig
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- -j$(nproc)
make ARCH=arm64 bootimg
```

## Clean

```sh
make clean
make distclean
```

The `build/` tree contains tracked zero-byte `.gitkeep` files so the intended output directories exist in a source checkout. A build may replace that content with generated objects and images. The source tree deliberately keeps x86_64 and arm64 implementations separate. The kernel uses C11 and GNU assembler in freestanding mode and does not depend on an external runtime library. Internal libc headers and source provide the user-space boundary.

TimeOS v0.1.0 is organized for real kernel development rather than as a teaching-only toy. The initial release establishes boot, timer, scheduling, memory, interrupt, filesystem, networking, syscall, security, driver, libc, userland, server, and test boundaries. Some broad subsystems are conservative initial implementations, while the timer core contains concrete data structures and algorithms intended to serve as the timing authority for the rest of the kernel.

## Release scope

The v0.1.0 source tree establishes explicit boundaries between generic kernel services, architecture code, drivers, user-space libraries, servers, tests, and image tooling. The timer subsystem is intentionally the most detailed portion of this release because every scheduling and timeout decision depends on a trustworthy time base. Clocksource registration separates counter hardware from clock conversion, while clockevents provide deadline programming. The high-resolution timer queue uses an ordered red-black tree, and the timer wheel handles larger collections of coarse deadlines efficiently. Timekeeper state maintains monotonic, wall, and boottime clocks independently so synchronization cannot make monotonic time move backwards. Tickless mode suppresses unnecessary periodic interrupts, and tick broadcast provides a path for CPUs that lack a usable local event source.

The source is licensed under Apache-2.0 License. Contributions should keep architecture-specific operations isolated, preserve freestanding compilation assumptions, and add tests when changing timing arithmetic or public ABI definitions. The build recipes are intentionally explicit so developers can inspect each generated artifact instead of relying on hidden host configuration.
