CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/pmm.o build/obj/buddy.o build/obj/vmm.o build/obj/kmalloc.o build/obj/slab.o build/obj/slub.o build/obj/vma.o build/obj/page-fault.o build/obj/map.o build/obj/mmap.o build/obj/munmap.o build/obj/mprotect.o build/obj/page.o build/obj/highmem.o build/obj/numa.o build/obj/swap.o build/obj/ksm.o build/obj/mempool.o build/obj/vmalloc.o build/obj/ioremap.o build/obj/hugetlb.o
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
