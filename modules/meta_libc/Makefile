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

SRC     = 	src/meta_atonbr.c		\
			src/meta_putchar.c		\
			src/meta_puterr.c		\
			src/meta_putnbr.c		\
			src/meta_putstr.c		\
			src/meta_strcat.c		\
			src/meta_strcmp.c		\
			src/meta_strcpy.c		\
			src/meta_strdup.c		\
			src/meta_strlen.c		\
			src/meta_strncat.c		\
			src/meta_strncmp.c		\
			src/meta_strncpy.c		\
			src/meta_strndup.c		\
			src/meta_strstr.c		\
			src/meta_mprintf.c

OBJ = $(SRC:.c=.o)

NAME = ../../libmeta.a

TPATH 	= 	unitests/unit_tests.c		\

VPATH = include

CFLAGS = -Wall -Wextra -pedantic

CPPFLAGS = -iquote $(VPATH)

TFLAGS = --coverage -lcriterion

all : $(NAME)

$(NAME):  $(OBJ)
	$(AR) cq $(NAME) $(OBJ)
	$(CP) $(NAME) ../meta_oop/lib/libmeta_base.a

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
