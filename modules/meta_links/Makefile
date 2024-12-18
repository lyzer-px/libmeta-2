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
			src/operation.c

ROOT	= 	../..

NAME 	= 	$(ROOT)/libmeta.a

LDLIBS 	= -lmeta

VPATH	=	$(ROOT)/include/

LDFLAGS = -L$(ROOT) ${LDLIBS}

CPPFLAGS = 	-isystem $(VPATH)

OBJ		 = 	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

.PHONY: all clean fclean re debug
