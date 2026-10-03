CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/spinlock.o build/obj/mutex.o build/obj/rwlock.o build/obj/seqlock.o build/obj/rwsem.o build/obj/semaphore.o build/obj/completion.o build/obj/atomic.o build/obj/percpu.o build/obj/futex.o build/obj/rcu.o
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
