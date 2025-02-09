##
## EPITECH PROJECT, 2025
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

SRC 	=	src/meta_atonbr.c						\
			src/printers/meta_mprintf.c				\
			src/printers/meta_putchar.c				\
			src/printers/meta_puterr.c				\
			src/printers/meta_putnbr.c				\
			src/printers/meta_putstr.c				\
			src/string/meta_strcat.c				\
			src/string/meta_strcmp.c				\
			src/string/meta_strcpy.c				\
			src/string/meta_strdup.c				\
			src/string/meta_strlen.c				\
			src/string/meta_strncat.c				\
			src/string/meta_strncmp.c				\
			src/string/meta_strncpy.c				\
			src/string/meta_strndup.c				\
			src/meta_nbrtoa.c						\
			src/string/meta_strstr.c				\
			src/string/meta_strsplt.c

ROOT	=	../..

NAME 	= 	$(ROOT)/libmeta.a

VPATH 	= 	$(ROOT)/include/

CFLAGS 	+= 	-Wall -Wextra -pedantic -std=c2x

CPPFLAGS = 	-iquote $(VPATH)

OBJ		 = 	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(AR) cq $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

tests_run: CPPFLAGS += --coverage -lcriterion
tests_run: $(OBJ)
	$(CC) $(CFLAGS) -o unit_tests $(OBJ) unitests/unit_tests.c $(CPPFLAGS)
	./unit_tests
	$(RM) unit_tests

.PHONY: all clean fclean re debug tests_run	\
