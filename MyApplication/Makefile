CC=arm-linux-gnueabi-gcc
FLAGS=-static -g -I.

SRCS=hello.c

EXEC=hello.deb

.PHONY = clean all

all : $(EXEC)

$(EXEC) : $(SRCS)
	$(CC) $(FLAGS) -o $@ $(SRCS)

clean:
	rm -rf $(EXEC)

