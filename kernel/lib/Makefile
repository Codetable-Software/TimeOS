CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/string.o build/obj/memory.o build/obj/memcpy.o build/obj/memset.o build/obj/math.o build/obj/div64.o build/obj/bitops.o build/obj/hash.o build/obj/rbtree.o build/obj/radix-tree.o build/obj/kfifo.o build/obj/crc.o build/obj/crc32.o build/obj/sort.o build/obj/list_sort.o build/obj/refcount.o build/obj/idr.o build/obj/bitmap.o build/obj/random.o build/obj/uuid.o build/obj/vsprintf.o
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
