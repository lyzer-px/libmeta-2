##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

AR ?= ar

RM ?= rm

SRC 	=	src/generic/destroy.c			\
			src/generic/create.c			\
			src/constructors/funptr1.c		\
			src/constructors/funptr2.c		\
			src/destructors/funptr4.c		\
			src/destructors/funptr5.c		\
			src/destructors/funptr6.c

CR = --coverage -lcriterion

ROOT = ../..

NAME = $(ROOT)/libmeta.a

VPATH = $(ROOT)/include

LDLIBS = -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio

LDFLAGS = -L. ${LDLIBS}

CFLAGS += -Wall -Wextra -pedantic -std=c2x

CPPFLAGS = -isystem $(VPATH)

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(AR) cq $(NAME) $(OBJ)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

tests_run: all
	$(CC) $(LDFLAGS) -o unit_tests $(SRC) tests/unit_tests.c $(CPPFLAGS) $(CR)
	./unit_tests
	gcovr --exclude tests --txt-metric branch

.PHONY: all clean fclean re debug \
