/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/30 13:40:40 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/06 13:50:15 by lade-kon      ########   odam.nl         */
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

//Printf
static int	ft_printconversions(va_list args, char c);
static int	ft_printloop(char *str, va_list args);
int 		ft_printf(const char *str, ...);


//Printing
int	print_c(int arg);
int	print_s(char *arg);
int	print_id(int arg);
int	print_u(unsigned int arg);
int	print_hex(unsigned int arg, char *hex);
int	print_p(unsigned long arg, char *hex);


//Utils
int	ft_strlen(char *str);
int	ft_numlen(int n);


#endif
