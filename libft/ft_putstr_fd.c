/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 17:01:57 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 17:07:59 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	return;
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	str1 = "Hello\n";
// 	str2 = "";
// 	str3 = "Hoi\n";
// 	ft_putstr_fd(str1, 1);
// 	ft_putstr_fd(str2, 1);
// 	ft_putstr_fd(str3, 1);

// 	return (0);
// }