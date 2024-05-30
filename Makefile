CC := gcc
CFLAG := -Wall -Wextra -Werror

fib_until:
	${CC} ${CFLAG} fib_until_93.c -o fib.bin