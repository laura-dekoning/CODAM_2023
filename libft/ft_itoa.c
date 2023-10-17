/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 21:39:12 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/17 21:39:36 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a string representing the integer 
received as an argument. Negative numbers must be handled. */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_numlen(n);
	s = ft_calloc(count + 1, sizeof(char));
	if (s == NULL)
		return (NULL);
	count--;
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		s[count--] = n % 10 + '0';
		n = n / 10;
	}
	return (s);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	int i;

// 	printf("Enter an integer: ");
// 	scanf("%i", &i);
// 	printf("%i converted with itoa: %s\n", i, (ft_itoa(i)));
// }