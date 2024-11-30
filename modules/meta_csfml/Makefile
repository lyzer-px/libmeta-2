##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

SRC 	=	src/main.c 					\

NAME = libmeta_csfml.a

VPATH = ./include

CFLAGS += -Wall -Wextra -pedantic

CSFMLIBS = -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio -lm

LDLIBS = -lmy -lgraphic ${CSFMLIBS}

LDFLAGS = -Llib ${LDLIBS}

CPPFLAGS = -iquote $(VPATH)

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(AR) rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: LDFLAGS += -fsanitize=address
debug: re

.PHONY: all clean fclean re debug
