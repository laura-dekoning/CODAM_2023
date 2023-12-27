/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/27 16:05:41 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/27 18:56:33 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_input_valid(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' && ft_isdigit(argv[i][j + 1]))
			j++;
		if (argv[i][j] == '\0')
			return (EXIT_FAILURE);
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == false)
				return (EXIT_FAILURE);
			j++;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
