CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/ls.o build/obj/cat.o build/obj/echo.o build/obj/cp.o build/obj/mv.o build/obj/rm.o build/obj/mkdir.o build/obj/rmdir.o build/obj/pwd.o build/obj/cd.o build/obj/sleep.o build/obj/date.o build/obj/uptime.o build/obj/ps.o build/obj/kill.o build/obj/mount.o build/obj/umount.o build/obj/ln.o build/obj/chmod.o build/obj/chown.o build/obj/touch.o build/obj/head.o build/obj/tail.o build/obj/wc.o build/obj/grep.o build/obj/find.o build/obj/env.o build/obj/id.o build/obj/whoami.o build/obj/uname.o build/obj/hostname.o build/obj/sync.o build/obj/reboot.o build/obj/poweroff.o build/obj/dd.o build/obj/stat.o build/obj/tree.o build/obj/nproc.o
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
