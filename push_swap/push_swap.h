/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/27 13:00:47 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/27 18:52:24 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}				t_node;

bool	is_input_valid(char **argv);
int		error_exit(void);

#endif