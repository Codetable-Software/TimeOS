CC ?= gcc
CFLAGS ?= -std=c11 -ffreestanding -fno-builtin -Wall -Wextra -O2
LD ?= ld
OBJS := build/obj/crt0.o build/obj/crt1.o build/obj/printf.o build/obj/fprintf.o build/obj/sprintf.o build/obj/snprintf.o build/obj/puts.o build/obj/putchar.o build/obj/fputs.o build/obj/malloc.o build/obj/calloc.o build/obj/realloc.o build/obj/free.o build/obj/memcpy.o build/obj/memset.o build/obj/memmove.o build/obj/memcmp.o build/obj/strlen.o build/obj/strcmp.o build/obj/strcpy.o build/obj/strncpy.o build/obj/strcat.o build/obj/strchr.o build/obj/strstr.o build/obj/time.o build/obj/clock.o build/obj/nanosleep.o build/obj/sleep.o build/obj/gettimeofday.o build/obj/timegm.o build/obj/localtime.o build/obj/strftime.o build/obj/syscall.o build/obj/syscall-asm.o build/obj/errno.o build/obj/assert.o build/obj/abort.o build/obj/exit.o build/obj/_exit.o build/obj/atexit.o build/obj/open.o build/obj/close.o build/obj/read.o build/obj/write.o build/obj/lseek.o build/obj/stat.o build/obj/fstat.o build/obj/mmap.o build/obj/munmap.o build/obj/brk.o build/obj/sbrk.o build/obj/getpid.o build/obj/getppid.o build/obj/fork.o build/obj/execve.o build/obj/waitpid.o build/obj/kill.o build/obj/signal.o build/obj/sigaction.o build/obj/socket.o build/obj/connect.o build/obj/bind.o build/obj/listen.o build/obj/accept.o build/obj/send.o build/obj/recv.o build/obj/dirent.o build/obj/opendir.o build/obj/readdir.o build/obj/closedir.o build/obj/ctype.o build/obj/qsort.o build/obj/bsearch.o build/obj/rand.o build/obj/getenv.o
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
