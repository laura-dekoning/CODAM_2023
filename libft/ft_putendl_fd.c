/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 17:10:04 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 17:18:56 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the string ’s’ to the given file descriptor followed by a newline.
So this is basically the same as putstr_fd but with a new line at the end.*/

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	if (!s || (fd < 0))
		return;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	str1 = "Hello\n";
// 	str2 = "";
// 	str3 = "Hoi\n";
// 	ft_putendl_fd(str1, 1);
// 	ft_putendl_fd(str2, 1);
// 	ft_putendl_fd(str3, 1);

// 	return (0);
// }