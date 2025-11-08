
CC = gcc
CFLAGS = -Wall

objects = pointer_parameter c_refresher
all: $(objects)

$(objects): %: %.c
	$(CC) $(CFLAGS) -o $@ $<	