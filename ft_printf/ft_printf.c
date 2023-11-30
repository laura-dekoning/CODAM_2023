/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/30 13:43:25 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/11/30 13:48:05 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"




ft_printloop(char *str, va_list args)
{
	
}


int ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	if (str == NULL)
		return (0);
	va_start(args, str);
	len = ft_printloop(str, args);
	va_end(args);
	return (len);
	va_end(args);
}


int	main()
{
	ft_printf("");
	return (0);
}