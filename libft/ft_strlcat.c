/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:06:45 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 14:53:43 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int dstsize)
{
	int	dst_len;
	int	cat;
	int	i;

	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	cat = dst_len;
	i = 0;
	while (src[i] && (i + dst_len + 1) < dstsize)
	{
		dst[i + cat] = src[i];
		i++;
	}
	if (dst_len < dstsize)
		dst[i + cat] = '\0';
	return (ft_strlen(src) + dst_len);
}

// int	main(void)
// {
// 	char	dst[20];
// 	const char	*src;
// 	int	dstsize;
// 	int	result;

// 	strcpy(dst, "hoi00000");
// 	src = "hallo";
// 	dstsize = strlen(dst);
// 	printf("dstsize: %i\n", dstsize);
// 	result = ft_strlcat(dst, src, dstsize);
// 	printf("%i\n", result);
// 	printf("Modified: %s\n", dst);

// 	return (0);
// }