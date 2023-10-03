/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 17:20:47 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/03 17:26:06 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the integer ’n’ to the given file descriptor. Uses write, so I used
ft_putchar_fd again. This function uses recursion to convert an integer to 
a character which can be written with write.*/

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	while (n > 9)
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), fd);

}