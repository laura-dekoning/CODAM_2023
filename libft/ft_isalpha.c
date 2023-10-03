/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 07:38:37 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 15:32:13 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (true);
	return (false);
}
