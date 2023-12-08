/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_u.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 11:40:31 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/08 04:04:34 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	print_u(unsigned int n)
{
	unsigned int	len;
	unsigned long	i;

	i = n;
	len = ft_numlen(i);
	if (i > 9)
	{
		print_u(i / 10);
		print_u(i % 10);
	}
	if (i <= 9)
		print_c(i + '0');
	return (len);
}
