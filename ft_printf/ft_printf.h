/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/30 13:40:40 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/11/30 14:40:19 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <ctype.h>
# include <stdarg.h>


//Printing
int	print_c(int arg);
int	print_s(int arg);
int	print_id(int arg);
int	print_u(int arg);
int	print_hex(int arg);
int	print_p(int arg);


//Utils
int	ft_strlen(char *str);
int	ft_numlen(int n);


#endif
