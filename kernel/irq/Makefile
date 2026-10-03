CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/irq.o build/obj/irqdesc.o build/obj/irqchip.o build/obj/irqdomain.o build/obj/manage.o build/obj/softirq.o build/obj/tasklet.o build/obj/ipi.o build/obj/affinity.o build/obj/generic-chip.o
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
