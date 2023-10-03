/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 15:00:30 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 15:32:37 by lde-koni      ########   odam.nl         */
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
