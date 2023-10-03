/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 15:05:40 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 15:32:33 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (true);
	return (false);
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c += 32;
	return (c);
}
