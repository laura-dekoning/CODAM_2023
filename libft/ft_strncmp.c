/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 20:51:05 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/11 21:13:21 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	while (count > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		else
		{
			str1++;
			str2++;
			count--;
		}
	}
	return (0);
}

// int main() {
//     const char* str1 = "";
//     const char* str2 = "appetizer";
//     size_t n = 4; // Number of characters to compare
// 	int	index;
//     int result = ft_strncmp(str1, str2, n);
//     int originalResult = strncmp(str1, str2, n);

// 	index = 0;
// 	while (str1[index] != '\0')
// 	{
// 		printf("Value of characters str1: %c \t %d\n", str1[index], str1[index]);
// 		index++;
// 	}
// 	index = 0;
// 	while (str2[index] != '\0')
// 	{
// 		printf("Value of characters str1: %c \t %d\n", str2[index], str2[index]);
// 		index++;
// 	}
//     printf("Comparison result using ft_strncmp: %d\n", result);
//     printf("Comparison result using strncmp: %d\n", originalResult);

//     // Compare the results with a while loop
//     size_t i = 0;
//     while (i < n) {
//         if (str1[i] != str2[i]) {
//             printf("Difference found at position %zu: '%c' != '%c'\n", i, str1[i], str2[i]);
//             break; // Exit the loop when a difference is found
//         }
//         i++;
//     }

//     return 0;
// }