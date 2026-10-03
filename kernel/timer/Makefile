CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/timekeeper.o build/obj/tick.o build/obj/tick-broadcast.o build/obj/tick-sched.o build/obj/tick-oneshot.o build/obj/hrtimer.o build/obj/hrtimer-queue.o build/obj/timer-wheel.o build/obj/timer-list.o build/obj/clocksource.o build/obj/clockevent.o build/obj/clocksource-select.o build/obj/timeconv.o build/obj/timeout.o build/obj/delay.o build/obj/timequeue.o build/obj/alarmtimer.o build/obj/posix-timer.o build/obj/ntp.o
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
