##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

SRC 	=	src/meta_atonbr.c				\
			src/meta_mprintf.c				\
			src/meta_putchar.c				\
			src/meta_puterr.c				\
			src/meta_putnbr.c				\
			src/meta_putstr.c				\
			src/meta_strcat.c				\
			src/meta_strcmp.c				\
			src/meta_strcpy.c				\
			src/meta_strdup.c				\
			src/meta_strlen.c				\
			src/meta_strncat.c				\
			src/meta_strncmp.c				\
			src/meta_strncpy.c				\
			src/meta_strndup.c				\
			src/meta_strstr.c				\
			src/meta_word_array_delim.c		\

ROOT	=	../..

NAME 	= 	$(ROOT)/libmeta.a

VPATH 	= 	$(ROOT)/include/

CFLAGS 	+= 	-Wall -Wextra -pedantic -std=c2x

CPPFLAGS = 	-isystem $(VPATH)

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
