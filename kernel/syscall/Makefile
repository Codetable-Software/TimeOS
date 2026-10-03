CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/syscall.o build/obj/syscall-table.o build/obj/sys_time.o build/obj/sys_proc.o build/obj/sys_mem.o build/obj/sys_fs.o build/obj/sys_signal.o build/obj/sys_socket.o build/obj/sys_ipc.o build/obj/sys_io.o build/obj/sys_misc.o
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
