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

NAME 	= 	../liblinked.a

LIB 	=	../

LDLIBS 	= -lmy

LDFLAGS = -L${LIB} ${LDLIBS}

CFLAGS 	+= 	-Wall -Wextra -pedantic

CPPFLAGS = 	-iquote $(VPATH) -iquote $(LIB)/include

OBJ		 = 	$(SRC:.c=.o)

VPATH	=	include

ROOT	=	.

ROOTVPATH	=	$(ROOT)/$(VPATH)

CFLAGS += -Wall -Wextra -pedantic

CPPFLAGS = -iquote $(ROOTVPATH) -iquote $(VPATH)

all: $(NAME)
	$(CP) $(VPATH)/linked_lists.h $(ROOTVPATH)/

dependencies:
	$(MAKE) -C $(LIB)/my ROOT=$(ROOT)

$(NAME): dependencies $(OBJ)
	$(AR) rc $(NAME) $(OBJ)

clean:
	$(MAKE) clean -C $(LIB)/my
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIB)/my
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re
	$(MAKE) debug -C $(LIB)/my ROOT=$(ROOT)

.PHONY: all clean fclean re debug
