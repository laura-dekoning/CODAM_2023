/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 14:57:33 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/27 15:23:16 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


bool	test_isalnum(void)
{
	int		c;
	int		i;
	char	*result;
	char	*result2;

	c = 'a';
	i = ft_isalnum(c);
	if (i == false)
	{
		result = "No";
		result2 = "is NOT al numerical";
	}
	if (i == true)
	{
		result = "Yes";
		result2 = "is al numerical";
	}
	printf("%s [%c] %s\n", c, result, result2);
	i = isalnum(c);
	if (i == false)
	{
		result = "No";
		result2 = "is NOT al numerical";
	}
	if (i == true)
	{
		result = "Yes";
		result2 = "is al numerical";
	}
	printf("%s [%c] %s\n", c, result, result2);
}

int	main(void)
{
	printf("ft_isalpha\n");
	printf("ft_isdigit\n");
	printf("ft_isalnum\n");
	printf("ft_isascii\n");
	printf("ft_isprint\n");
	printf("ft_strlen\n");
	printf("ft_memset\n");
	printf("ft_bzero\n");
	printf("ft_memcpy\n");
	printf("ft_memmove\n");
	printf("ft_strlcpy\n");
	printf("ft_strlcat\n");
	printf("ft_toupper\n");
	printf("ft_tolower\n");
	printf("ft_strchr\n");
	printf("ft_strrchr\n");
	printf("ft_strncmp\n");
	printf("ft_memchr\n");
	printf("ft_memcmp\n");
	printf("ft_strnstr\n");
	printf("ft_atoi\n");
	printf("ft_calloc\n");
	printf("ft_strdup\n");
	printf("ft_substr\n");
	printf("ft_strjoin\n");
	printf("ft_strtrim\n");
	printf("ft_split\n");
	printf("ft_itoa\n");
	printf("ft_strmapi\n");
	printf("ft_striteri\n");
	printf("ft_putchar_fd\n");
	printf("ft_putstr_fd\n");
	printf("ft_putendl_fd\n");
	printf("ft_putnbr_fd\n");
	printf("ft_lstnew\n");
	printf("ft_lstadd_front\n");
	printf("ft_lstsize\n");
	printf("ft_lstlast\n");
	printf("ft_lstadd_back\n");
	printf("ft_lstdelone\n");
	printf("ft_lstclear\n");
	printf("ft_lstiter\n");
	printf("ft_lstmap\n");
}
