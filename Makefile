CC = gcc
SRC = _putchar.c _printchar.c _printstring.c _printsign.c _printnum.c main.c _printf.c
FILE = _printf.c
OBJ = $(SRC:.c=.o)

NAME = a.out

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format

BETTY = betty

all: $(OBJ)
	${CC} $(OBJ) -o $(NAME)
	$(BETTY) $(FILE)
clean:
	$(RM) *.swp *~ $(NAME)
oclean:
	$(RM) $(OBJ)
f: clean oclean

re: f all
