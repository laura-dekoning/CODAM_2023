/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 07:38:37 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 14:54:19 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (true);
	return (false);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'a';
// 	if (ft_isalpha(c) == true)
// 		printf("Is alphabetical\n");
// 	if (ft_isalpha(c) == false)
// 		printf("Is NOT alphabetical\n");
// 	return (0);
// }