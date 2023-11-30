# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/30 13:41:54 by lade-kon      #+#    #+#                  #
#    Updated: 2023/11/30 13:42:43 by lade-kon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 

# OBJ = $(SRC:%.c=obj/%.o)
OBJ = $(SRC:%.c=%.o)
# OBJ_BONUS = $(SRC_BONUS:%.c=obj/%.o)
OBJ_BONUS = $(SRC_BONUS:%.c=%.o)
INCLUDE = ft_printf.h
CFLAGS = -Wall -Werror -Wextra
CC = cc
MAIN = main.c

.PHONY : all clean fclean re

all: $(NAME) 

$(NAME) : $(OBJ) $(INCLUDE)
	@ar -rcs $(NAME) $(OBJ)

obj/%.o: %.c
	@echo "${PURPLE} Compiling... ${RESET}"
	@mkdir -p $(dir $@)
	@$(CC) -c $(CFLAGS) -o $@ $<

bonus: $(OBJ_BONUS)
	@ar -rcs $(NAME) $(OBJ_BONUS)
	@echo "${GREEN} Libft bonus done! ${RESET}"

norminette:
	@echo "${CYAN}🧐 Checking the Norm...${RESET}"
	@norminette -R CheckForbiddenSourceHeader
	@echo "${GREEN} Norm-i-netting complete. Well done!${RESET}" 

clean:
	rm -rf $(OBJ)
	
# rm -rf obj

fclean: clean
	rm -f $(NAME)

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