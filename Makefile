ARCH ?= x86_64
CROSS_COMPILE ?=
CC := $(CROSS_COMPILE)gcc
LD := $(CROSS_COMPILE)ld
CFLAGS := -std=c11 -ffreestanding -fno-builtin -fno-stack-protector -Wall -Wextra -Werror -O2
KERNEL_OBJS := build/$(ARCH)/kernel/core/kmain.o build/$(ARCH)/kernel/timer/timekeeper.o build/$(ARCH)/kernel/timer/clocksource.o build/$(ARCH)/kernel/timer/clockevent.o

.PHONY: all clean distclean install defconfig rpi4_defconfig mobile_defconfig iso image sdimage bootimg run-qemu
all: build/$(ARCH)/timeos.elf

build/$(ARCH)/kernel/core/kmain.o: kernel/core/kmain.c
	@mkdir -p $(@D); $(CC) $(CFLAGS) -Ikernel/include -Ikernel/timer/include -c $< -o $@

build/$(ARCH)/kernel/timer/timekeeper.o: kernel/timer/timekeeper.c
	@mkdir -p $(@D); $(CC) $(CFLAGS) -Ikernel/include -Ikernel/timer/include -c $< -o $@

build/$(ARCH)/kernel/timer/clocksource.o: kernel/timer/clocksource.c
	@mkdir -p $(@D); $(CC) $(CFLAGS) -Ikernel/include -Ikernel/timer/include -c $< -o $@

build/$(ARCH)/kernel/timer/clockevent.o: kernel/timer/clockevent.c
	@mkdir -p $(@D); $(CC) $(CFLAGS) -Ikernel/include -Ikernel/timer/include -c $< -o $@

build/$(ARCH)/timeos.elf: $(KERNEL_OBJS)
	$(LD) -T toolchain/ld/$(ARCH).ld -o $@ $(KERNEL_OBJS)

defconfig:
	cp configs/generic-$(ARCH)_defconfig .config

rpi4_defconfig:
	cp configs/rpi4-arm64_defconfig .config

mobile_defconfig:
	cp configs/generic-arm64_defconfig .config

iso: all
	./toolchain/scripts/mkiso.sh $(ARCH)

image: all
	./toolchain/scripts/mkimg.sh $(ARCH)

sdimage: all
	./toolchain/scripts/mkimg.sh rpi4

bootimg: all
	./toolchain/scripts/build-image.sh arm64

run-qemu: all
	./toolchain/scripts/qemu-run.sh $(ARCH)

install: all
	install -D build/$(ARCH)/timeos.elf /boot/timeos-$(ARCH).elf

clean:
	rm -rf build/$(ARCH)/*.elf build/$(ARCH)/*.iso build/$(ARCH)/*.img build/$(ARCH)/kernel

distclean: clean
	rm -f .config
