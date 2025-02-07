##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

SRC 	=	src/apx_env_fetch.c						\
			src/apx_nsfile_fetch.c

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
