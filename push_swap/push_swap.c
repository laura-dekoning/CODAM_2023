/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/27 13:00:45 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/27 18:59:06 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**input;

	if (argc < 2 || argv[1][0] == '\0')
		return (0);
	else if (argc == 2)
	{
		input = ft_split(argv[1], ' ');
		if (input == NULL)
			error_exit();
		push_swap(input);
		//free input so no leaks will be detected. 
	}
	else
	{
		input = &argv[1];
		push_swap(input);
	}
	return (0);
}