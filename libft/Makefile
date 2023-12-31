# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/03 12:39:54 by lde-koni      #+#    #+#                  #
#    Updated: 2023/11/03 14:39:55 by lade-kon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_strchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_memcmp.c \
ft_atoi.c \
ft_strdup.c \
ft_strjoin.c \
ft_substr.c  \
ft_strnstr.c \
ft_strtrim.c \
ft_striteri.c \
ft_strmapi.c \
ft_itoa.c \
ft_split.c

SRC_BONUS = \
ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c \
ft_lstclear_bonus.c \
ft_lstiter_bonus.c \
ft_lstmap_bonus.c


# OBJ = $(SRC:%.c=obj/%.o)
OBJ = $(SRC:%.c=%.o)
# OBJ_BONUS = $(SRC_BONUS:%.c=obj/%.o)
OBJ_BONUS = $(SRC_BONUS:%.c=%.o)
INCLUDE = libft.h
CFLAGS = -Wall -Werror -Wextra
CC = cc
MAIN = main.c


.PHONY : all clean fclean re

all: $(NAME)
# @echo "${PURPLE} Compiling... ${RESET}"

$(NAME) : $(OBJ) $(INCLUDE)
	ar -rcs $(NAME) $(OBJ)

obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

bonus: $(NAME) $(OBJ_BONUS) $(OBJ)
	ar -rcs $(NAME) $(OBJ_BONUS)
# @echo "${GREEN} Libft bonus done! ${RESET}"

norminette:
	@echo "${CYAN}🧐 Checking the Norm...${RESET}"
	@norminette -R CheckForbiddenSourceHeader
	@echo "${GREEN} Norm-i-netting complete. Well done!${RESET}" 

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)
	rm -rf obj

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