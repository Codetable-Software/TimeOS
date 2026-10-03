CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/fork.o build/obj/exec.o build/obj/exit.o build/obj/wait.o build/obj/pid.o build/obj/signal.o build/obj/ptrace.o build/obj/cred.o build/obj/nsproxy.o build/obj/coredump.o build/obj/process-group.o build/obj/session.o
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
