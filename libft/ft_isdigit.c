/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 07:38:50 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 14:54:13 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'a';
// 	if (ft_isdigit(c) == true)
// 		printf("Is a digit\n");
// 	if (ft_isdigit(c) == false)
// 		printf("Is NOT a digit\n");
// 	return (0);
// }