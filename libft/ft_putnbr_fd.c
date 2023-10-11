/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 17:20:47 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/11 14:09:41 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the integer ’n’ to the given file descriptor. Uses write, so I used
ft_putchar_fd again. This function uses recursion to convert an integer to 
a character which can be written with write.*/

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	else if (n <= 9)
		ft_putchar_fd((n + '0'), fd);
	if (n > 9)
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
}
