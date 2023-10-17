/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 21:12:23 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/17 21:22:29 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-terminated 
string needle in the string haystack, where not more than len characters are 
searched.  Characters that appear after a `\0' character are not searched.

RETURN VALUE:
If needle is an empty string, haystack is returned; if needle occurs nowhere 
in haystack, NULL is returned; otherwise a pointer to the first character of 
the first occurrence of needle is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ndl_len;

	ndl_len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)&haystack[0]);
	i = 0;
	while (haystack[i] != '\0' && i < len && (ndl_len + i <= len))
	{
		if (strncmp(&haystack[i], needle, ndl_len))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
