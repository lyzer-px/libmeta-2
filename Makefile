##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

AR 	?= ar

CC 	?= gcc

SRC 	=	src/main.c 					\
			src/meta_top.c				\
			src/get_info.c				\
			src/process.c				\
			src/tools.c


MODULES	= 	modules

LIBC 	=	meta_libc

LINKED	= meta_linked_lists

NAME 	= 	meta_top

VPATH 	= 	include

CFLAGS 	+= 	-Wall -Wextra -pedantic

CPPFLAGS = 	-isystem $(VPATH)

OBJ		 = 	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(MODULES)/$(LIBC)
	$(MAKE) -C $(MODULES)/$(LINKED)
	$(AR) -rcs $(NAME) $(OBJ)
clean:
	$(MAKE) clean -C $(MODULES)/$(LIBC)
	$(MAKE) clean -C $(MODULES)/$(LINKED)
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(MODULES)/$(LIBC)
	$(MAKE) fclean -C $(MODULES)/$(LINKED)
	$(RM) $(NAME)

re: fclean all
	$(MAKE) fclean -C $(MODULES)/$(LIBC)
	$(MAKE) fclean -C $(MODULES)/$(LINKED)

debug: CFLAGS += -g3
debug: re
	$(MAKE) debug -C $(MODULES)/$(LIBC)
	$(MAKE) debug -C $(MODULES)/$(LINKED)

.PHONY: all clean fclean re debug
