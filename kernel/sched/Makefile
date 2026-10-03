CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/sched.o build/obj/sched-core.o build/obj/sched-fair.o build/obj/sched-rt.o build/obj/sched-idle.o build/obj/sched-deadline.o build/obj/sched-clock.o build/obj/loadavg.o build/obj/cpufreq.o build/obj/idle.o build/obj/context.o build/obj/switch-to.o
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
