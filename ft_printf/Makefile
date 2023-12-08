# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/30 13:41:54 by lade-kon      #+#    #+#                  #
#    Updated: 2023/12/07 14:06:13 by lade-kon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

SRC = 	ft_printf.c \
		ft_utils.c \
		print_c.c \
		print_s.c \
		print_id.c \
		print_u.c \
		print_hex.c \
		print_p.c

OBJ = $(SRC:%.c=obj/%.o)
# OBJ = $(SRC:%.c=%.o)
OBJ_BONUS = $(SRC_BONUS:%.c=obj/%.o)
# OBJ_BONUS = $(SRC_BONUS:%.c=%.o)
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

norminette:
	@echo "${CYAN}🧐 Checking the Norm...${RESET}"
	@norminette -R CheckForbiddenSourceHeader
	@echo "${GREEN} Norm-i-netting complete. Well done!${RESET}" 

clean:
	rm -rf obj

# rm -rf $(OBJ)


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