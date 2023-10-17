# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/03 12:39:54 by lde-koni      #+#    #+#                  #
#    Updated: 2023/10/17 21:47:31 by lade-kon      ########   odam.nl          #
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

OBJ = $(SRC:%.c=obj/%.o)
INCLUDE = libft.h
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
	rm -rf $(OBJ)
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