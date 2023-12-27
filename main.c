/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 13:15:56 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/08 04:08:53 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	i;
	int	j;


	printf("Failed test for %%d\n");
	i = printf("%d\n", INT_MIN);
	j = ft_printf("%d\n", INT_MIN);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	j = ft_printf("%d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%d\n", 10);
	j = ft_printf("%d\n", 10);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%d\n", 99);
	j = ft_printf("%d\n", 99);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);



	printf("Failed test for %%i\n");
	i = printf("%i\n", INT_MIN);
	j = ft_printf("%i\n", INT_MIN);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	j = ft_printf("%i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);

	printf("Failed test for %%u\n");
	i = printf("%u\n", -1);
	j = ft_printf("%u\n", -1);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", -9);
	j = ft_printf("%u\n", -9);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", -10);
	j = ft_printf("%u\n", -10);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", -11);
	j = ft_printf("%u\n", -11);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", -14);
	j = ft_printf("%u\n", -14);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", -15);
	j = ft_printf("%u\n", -15);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", -16);
	j = ft_printf("%u\n", -16);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", -99);
	j = ft_printf("%u\n", -99);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", -100);
	j = ft_printf("%u\n", -100);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", -101);
	j = ft_printf("%u\n", -101);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", INT_MIN);
	j = ft_printf("%u\n", INT_MIN);
	printf("original\treturn: %d\n", i);
	ft_printf("ft_printf\treturn: %d\n", j);
	i = printf("%u\n", INT_MAX);
	j = ft_printf("%u\n", INT_MAX);
	printf("original\treturn: %d\n", i);
	ft_printf("return: %d\n", j);

	return (0);
}