##
## EPITECH PROJECT, 2024
## libmeta
## File description:
## Makefile
##

CC ?= gcc

CP ?= cp

AR ?= ar

RM ?= rm

SRC     = 	src/properties.c 	\
			src/actors.c

OBJ = $(SRC:.c=.o)

NAME = ../../libmeta.a

TPATH 	= 	unitests/unit_tests.c		\

VPATH = include

MLIBC = ../meta_libc/include

CFLAGS = -Wall -Wextra -pedantic -Llib -lmeta_base.a

CPPFLAGS = -iquote $(VPATH) -iquote $(MLIBC)

TFLAGS = --coverage -lcriterion

all : $(NAME)

$(NAME):  $(OBJ)
	$(AR) cq $(NAME) $(OBJ)

re: fclean all

clean :
	$(RM) $(OBJ)
	find -name "*~" -delete -o -name "#*#" -delete -o -name "*.gc*" -delete

fclean: clean
	$(RM) $(NAME)

debug: CFLAGS += -g3
debug: re

tests_run:
	$(CC) $(CFLAGS) -o unit_tests $(TPATH) $(SRC) $(CPPFLAGS) $(TFLAGS)
	./unit_tests

.PHONY: all re clean fclean debug tests_run	\
