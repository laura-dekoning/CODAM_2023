/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/30 13:43:25 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/06 13:57:47 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// %c Prints a single character.
// %s Prints a string (as defined by the common C convention).
// %p The void * pointer argument has to be printed in hexadecimal format.
// %d Prints a decimal (base 10) number.
// %i Prints an integer in base 10.
// %u Prints an unsigned decimal (base 10) number.
// %x Prints a number in hexadecimal (base 16) lowercase format.
// %X Prints a number in hexadecimal (base 16) uppercase format.
// %% Prints a percent sign.

#include "ft_printf.h"

static int	ft_printconversions(va_list args, char c)
{
	int	len;
	
	len = 0;
	if (c == 'c')
		len += print_c(va_arg(args, int));
	else if (c == 's')
		len += print_s(va_arg(args, char *));
	else if (c == 'p')
		len += print_p(va_arg(args, unsigned long), "0123456789abcdef");
	else if (c == 'd')
		len += print_id(va_arg(args, int));
	else if (c == 'i')
		len += print_id(va_arg(args, int));
	else if (c == 'u')
		len += print_u(va_arg(args, unsigned int));
	else if (c == 'x')
		len += print_hex(va_arg(args, unsigned), "0123456789abcdef");
	else if (c == 'X')
		len += print_hex(va_arg(args, unsigned), "0123456789ABCDEF");
	else if (c == '%')
		len += print_c('%');
	return (len);
}


static int	ft_printloop(char *str, va_list args)
{
	
}


int ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	if (str == NULL)
		return (0);
	va_start(args, str);
	len = ft_printloop(str, args);
	va_end(args);
	return (len);
	va_end(args);
}


int	main()
{
	ft_printf("");
	return (0);
}