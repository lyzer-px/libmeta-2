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

LDLIBS 	= -l

LDFLAGS = -L${ROOT} ${LDLIBS}

CFLAGS 	+= 	-Wall -Wextra -pedantic -std=c2x

VPATH	=	$(ROOT)/include

OBJ		 = 	$(SRC:.c=.o)

CPPFLAGS = 	-isystem $(VPATH)

CFLAGS += -Wall -Wextra -pedantic -std=c2x

CPPFLAGS = -isystem $(VPATH)

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
