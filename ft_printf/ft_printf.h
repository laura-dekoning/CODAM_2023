/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/30 13:40:40 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/08 04:05:38 by lade-kon      ########   odam.nl         */
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

int				ft_printf(const char *str, ...);

//Printing
unsigned int	print_c(int arg);
unsigned int	print_s(char *arg);
unsigned int	print_id(int arg);
unsigned int	print_u(unsigned int arg);
unsigned int	print_hex(unsigned int arg, char *hex);
unsigned int	print_p(unsigned long arg, char *hex);

//Utils
unsigned int	ft_strlen(char *str);
unsigned int	ft_numlen(long n);

#endif
