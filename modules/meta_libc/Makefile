##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

SRC 	=	src/main.c 					\
			src/my_top.c				\
			src/get_info.c				\
			src/process.c				\
			src/tools.c


NAME 	= 	my_top

VPATH 	= 	./include

CFLAGS 	+= 	-Wall -Wextra -pedantic

CPPFLAGS = 	-iquote $(VPATH)

OBJ		 = 	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(AR) -rcs $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

.PHONY: all clean fclean re debug
