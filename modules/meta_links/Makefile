##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

AR ?= ar

CC ?= gcc

CP	?=	cp

SRC 	=	src/nodes.c 					\

ROOT	=	../..

NAME 	= 	$(ROOT)/libmeta.a

VPATH 	= 	$(ROOT)/include/

CFLAGS 	+= 	-Wall -Wextra -pedantic -std=c2x

CPPFLAGS = 	-iquote $(VPATH)

OBJ		 = 	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) cq $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

.PHONY: all clean fclean re debug
