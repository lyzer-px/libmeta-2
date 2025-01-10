##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

AR 	?= ar

CC 	?= gcc

MODULES	= 	modules

LIBC 	=	meta_libc

LINKED	= meta_links

CSFML = meta_csfml

NAME 	= 	libmeta.a

VPATH 	= 	include

CFLAGS 	+= 	-Wall -Wextra -pedantic -std=c2x

CPPFLAGS = 	-isystem $(VPATH)

all:	$(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(MODULES)/$(LIBC)
	$(MAKE) -C $(MODULES)/$(LINKED)
	$(MAKE) -C $(MODULES)/$(CSFML)
	$(AR) rcs $(NAME) $(OBJ)
clean:
	$(MAKE) clean -C $(MODULES)/$(LIBC)
	$(MAKE) clean -C $(MODULES)/$(LINKED)
	$(MAKE) clean -C $(MODULES)/$(CSFML)
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(MODULES)/$(LIBC)
	$(MAKE) fclean -C $(MODULES)/$(LINKED)
	$(MAKE) fclean -C $(MODULES)/$(CSFML)
	$(RM) $(NAME)

re: fclean all
	$(MAKE) re -C $(MODULES)/$(LIBC)
	$(MAKE) re -C $(MODULES)/$(LINKED)
	$(MAKE) re -C $(MODULES)/$(CSFML)

debug: CFLAGS += -g3
debug: re
	$(MAKE) debug -C $(MODULES)/$(LIBC)
	$(MAKE) debug -C $(MODULES)/$(LINKED)
	$(MAKE) debug -C $(MODULES)/$(CSFML)

.PHONY: all clean fclean re debug \
