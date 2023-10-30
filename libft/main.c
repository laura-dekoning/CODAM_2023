/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 14:57:33 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/30 21:12:54 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void test_isalpha(void)
{
	char test_chars[] = {'a', 'X', 'j', '2', '#', '\0'};
	int i = 0;

	while (i < sizeof(test_chars) / sizeof(test_chars[0])) {
		int c = test_chars[i];
		char *result = isalpha(c) ? "yes" : "no";
		char *ft_result = ft_isalpha(c) ? "yes" : "no";
		
		printf("Result isalpha\t\t[%c]:\t%s\n", c, result);
		printf("Result ft_isalpha\t[%c]:\t%s\n", c, ft_result);
		
		i++;
	}
}

void test_isdigit(void)
{
	char test_chars[] = {'2', '7', '0', 'X', '#', '\0'};
	int i = 0;
	
	while (i < sizeof(test_chars) / sizeof(test_chars[0])) {
		int c = test_chars[i];
		char *result = isdigit(c) ? "yes" : "no";
		char *ft_result = ft_isdigit(c) ? "yes" : "no";
		
		printf("Result isdigit\t\t[%c]:\t%s\n", c, result);
		printf("Result ft_isdigit\t[%c]:\t%s\n", c, ft_result);
		
		i++;
	}
}

void	test_isalnum(void)
{
	char test_chars[] = {'a', '#', 'X', 'j', '\0', '2'};
	int i = 0;

	while (i < sizeof(test_chars) / sizeof(test_chars[0])) {
		int c = test_chars[i];
		char *result = isalnum(c) ? "yes" : "no";
		char *ft_result = ft_isalnum(c) ? "yes" : "no";

		printf("Result isalnum\t\t[%c]:\t%s\n", c, result);
		printf("Result ft_isalnum\t[%c]:\t%s\n", c, ft_result);

		i++;
	}
}

void	test_isascii(void)
{
	char test_chars[] = {'a', '#', 'X', 'j', '\0', '2'};
	int i = 0;

	while (i < sizeof(test_chars) / sizeof(test_chars[0])) 
	{
		int c = test_chars[i];
		char *result = isascii(c) ? "yes" : "no";
		char *ft_result = ft_isascii(c) ? "yes" : "no";

		printf("Result isascii\t\t[%c]:\t%s\n", c, result);
		printf("Result ft_isascii\t[%c]:\t%s\n", c, ft_result);

		i++;
	}
}

int main(void) {
	// Define an array of test names
	char *test_names[] = {
		"ft_isalpha", "ft_isdigit", "ft_isalnum", "ft_isascii", "ft_isprint", 
		"ft_strlen", "ft_memset", "ft_bzero", "ft_memcpy", "ft_memmove", 
		"ft_strlcpy", "ft_strlcat", "ft_toupper", "ft_tolower", "ft_strchr", 
		"ft_strrchr", "ft_strncmp", "ft_memchr", "ft_memcmp", "ft_strnstr", 
		"ft_atoi", "ft_calloc", "ft_strdup", "ft_substr", "ft_strjoin", 
		"ft_strtrim", "ft_split", "ft_itoa", "ft_strmapi", "ft_striteri", 
		"ft_putchar_fd", "ft_putstr_fd", "ft_putendl_fd", "ft_putnbr_fd", 
		"ft_lstnew", "ft_lstadd_front", "ft_lstsize", "ft_lstlast", 
		"ft_lstadd_back", "ft_lstdelone", "ft_lstclear", "ft_lstiter", "ft_lstmap"
	};

	// Define an array of corresponding test functions
	void (*test_functions[])() = {
		test_isalpha, test_isdigit, test_isalnum, test_isascii};/*, test_isprint, 
		test_strlen, test_memset, test_bzero, test_memcpy, test_memmove, 
		test_strlcpy, test_strlcat, test_toupper, test_tolower, test_strchr, 
		test_strrchr, test_strncmp, test_memchr, test_memcmp, test_strnstr, 
		test_atoi, test_calloc, test_strdup, test_substr, test_strjoin, 
		test_strtrim, test_split, test_itoa, test_strmapi, test_striteri, 
		test_putchar_fd, test_putstr_fd, test_putendl_fd, test_putnbr_fd, 
		test_lstnew, test_lstadd_front, test_lstsize, test_lstlast, 
		test_lstadd_back, test_lstdelone, test_lstclear, test_lstiter, test_lstmap*/
	// };

	int i = 0;

	while (i < sizeof(test_names) / sizeof(test_names[0])) {
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("----  TEST  :  %s  ----\n\n", test_names[i]);
		// Call the corresponding test function here
		test_functions[i]();
		i++;
	}

	return 0;
}

// // int	main(void)
// {
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_isalpha\t--------\n\n");
// 	test_isalpha();
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_isdigit\t--------\n\n");
// 	test_isdigit();
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_isalnum\t--------\n\n\n");
// 	test_isalnum();
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_isascii\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_isprint\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strlen\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_memset\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_bzero\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_memcpy\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_memmove\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strlcpy\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strlcat\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_toupper\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_tolower\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strchr\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strrchr\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strncmp\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_memchr\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_memcmp\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strnstr\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_atoi\t\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_calloc\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strdup\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_substr\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strjoin\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strtrim\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_split\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_itoa\t\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_strmapi\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_striteri\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_putchar_fd\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_putstr_fd\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_putendl_fd\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_putnbr_fd\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_lstnew\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_lstadd_front\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_lstsize\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_lstlast\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_lstadd_back\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_lstdelone\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_lstclear\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_lstiter\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("--------\tft_lstmap\t--------\n\n");
// 	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// }
