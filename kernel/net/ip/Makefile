CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/ipv4.o build/obj/ip_input.o build/obj/ip_output.o build/obj/ipv6.o build/obj/icmp.o build/obj/arp.o build/obj/ndisc.o
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
