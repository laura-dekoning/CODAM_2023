/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_s.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 13:47:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/06 14:00:45 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// This function will use write to print an entire string and it will return
// the string length. 

#include "ft_printf.h"

int	print_s(char *arg)
{
	int	i;
	
	i = 0;
	while (arg[i] != '\0')
	{
		write(1, &arg[i], 1);
		i++;
	}
	return (ft_strlen(arg));
}
