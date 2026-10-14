CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11

main: main.c warmup.h fake_hardware_reg.h binary_print.h
	$(CC) $(CFLAGS) main.c -o main

run: main
	./main

clean:
	rm -f main

.PHONY: run clean
