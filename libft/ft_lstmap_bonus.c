/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 11:43:32 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/27 11:45:37 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies the function ’f’ on the content of each 
node. Creates a new list resulting of the successive applications of the 
function ’f’. The ’del’ function is used to delete the content 
of a node if needed.

lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.
del: The address of the function used to delete the content of a node if needed.

RETURN VALUES: The new list.
NULL if the allocation fails.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

}
