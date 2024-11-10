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

SRC     = 	

OBJ = $(SRC:.c=.o)

NAME = libmy.a

TPATH = unit_tests/		\

H_NAME = 

VPATH = include/

CFLAGS = -Wall -Wextra -pedantic

CPPFLAGS = -iquote $(VPATH)

TFLAGS = --coverage -lcriterion

all : $(NAME)

$(NAME):  $(OBJ)
	$(AR) cq $(NAME) $(OBJ)

re: fclean all

clean :
	$(RM) -f $(OBJ)
	find -name "*~" -delete -o -name "#*#" -delete -o -name "*.gc*" -delete

fclean: clean
	$(RM) -f $(NAME)

debug: CFLAGS += -g3

debug: re

tests_run:
	$(CC) $(CFLAGS) -o unit_tests $(TPATH) $(SRC) $(CPPFLAGS) $(TFLAGS)
	./unit_tests

.PHONY: all re clean fclean debug tests_run	\
