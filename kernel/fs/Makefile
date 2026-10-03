CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/vfs.o build/obj/super.o build/obj/inode.o build/obj/dentry.o build/obj/file.o build/obj/mount.o build/obj/path.o build/obj/namei.o build/obj/open.o build/obj/read_write.o build/obj/stat.o build/obj/ioctl.o build/obj/poll.o build/obj/fcntl.o build/obj/splice.o build/obj/readdir.o build/obj/buffer.o build/obj/pagecache.o build/obj/dcache.o build/obj/icache.o build/obj/eventpoll.o build/obj/signalfd.o build/obj/timerfd.o build/obj/eventfd.o
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
