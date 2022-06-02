/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:59:18 by lperrin           #+#    #+#             */
/*   Updated: 2022/05/30 17:54:29 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(int thing)
{
	write(1, &thing, 1);
	return (1);
}

int	ft_format_checker(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == '%')
		print_length += ft_printpercent();
	else if (format == 'c')
		print_length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (format == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'X')
		print_length += ft_print_hex_maj(va_arg(args, unsigned int));
	else if (format == 'x')
		print_length += ft_print_hex_min(va_arg(args, unsigned int));
	return (print_length);
}
//The p format in printf is any format
//so the output would be written in hexadecimal

int	ft_printf(const char *thing, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, thing);
	while (thing[i])
	{
		if (thing[i] == '%')
		{
			print_length += ft_format_checker(args, thing[i + 1]);
			i++;
		}
		else
			print_length += ft_putchar(thing[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}

/* int	main(void)
{
	printf("%d\n", ft_printf("%u\n", -10));
	printf("%d\n", printf("%u\n", -10));
	return (0);
} */
