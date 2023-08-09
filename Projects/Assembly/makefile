

SRC = $(wildcard *.asm)
OBJECT = $(wildcard *.o)


hello:
	nasm -felf64 $(SRC) -o hello.o && ld $(OBJECT) -o hello
