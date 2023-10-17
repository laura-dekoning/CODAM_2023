/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 21:03:17 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/17 21:08:47 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The memcmp() function compares byte string s1 against byte string s2.  
Both strings are assumed to be n bytes long.
The memcmp() function returns zero if the two strings are identical, 
otherwise returns the difference between the first two differing bytes 
(treated as unsigned char values, so that `\200' is greater than `\0', 
for example). Zero-length strings are always identical. This behavior 
is not required by C and portable code should only depend on the sign 
of the returned value.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
