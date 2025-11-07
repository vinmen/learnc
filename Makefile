
CC = gcc
CFLAGS = -Wall

objects = pointer_parameter
all: $(objects)

$(objects): %: %.c
	$(CC) $(CFLAGS) -o $@ $<	