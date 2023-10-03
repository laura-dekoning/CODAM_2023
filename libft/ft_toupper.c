/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 15:00:30 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 15:05:34 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (true);
	return (false);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = '0';
// 	c = ft_toupper(c);
// 	printf("%c\n", c);
// 	return (0);
// }