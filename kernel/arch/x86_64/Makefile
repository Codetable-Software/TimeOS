CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/cpu.o build/obj/gdt.o build/obj/idt.o build/obj/isr.o build/obj/trap.o build/obj/smp.o build/obj/apic.o build/obj/cpuid.o build/obj/msr.o build/obj/tlb.o build/obj/cache.o build/obj/io.o build/obj/ioport.o build/obj/percpu.o build/obj/machine.o build/obj/setup.o build/obj/context.o build/obj/entry.o build/obj/syscall-entry.o build/obj/head.o build/obj/vmlinux.lds.o
.PHONY: all clean install
all: $(OBJS)

$(OBJS):
	@mkdir -p $(@D)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build/obj

install: all
	@printf '%s\n' 'TimeOS module objects prepared'
