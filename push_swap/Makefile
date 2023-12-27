# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/27 13:00:41 by lade-kon      #+#    #+#                  #
#    Updated: 2023/12/27 18:55:00 by lade-kon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = \
push_swap.c \
input_check.c \
error.c


OBJ = $(SRC:%.c=obj/%.o)
INCLUDE = push_swap.h
CFLAGS = -Wall -Werror -Wextra
CC = cc
MAIN = main.c


.PHONY : all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	@$(MAKE) -C libft
	$(CC) $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)

obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

norminette:
	@echo "${CYAN}🧐 Checking the Norm...${RESET}"
	@norminette -R CheckForbiddenSourceHeader
	@echo "${GREEN} Norm-i-netting complete. Well done!${RESET}" 

clean:
	rm -rf $(OBJ)
	rm -rf obj
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all

## Colours ##
RESET		:= \033[0m
RED			:= \033[1;91m
GREEN		:= \033[1;92m
YELLOW		:= \033[1;93m
BLUE		:= \033[1;94m
PURPLE		:= \033[1;95m
CYAN		:= \033[1;96m
WHITE		:= \033[1;97m
BLACK		:= \033[1;90m