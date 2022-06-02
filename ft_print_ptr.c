/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:59:07 by lperrin           #+#    #+#             */
/*   Updated: 2022/06/02 11:38:41 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_ptr_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_to_hex(unsigned long long nbr)
{
	if (nbr >= 16)
		ft_to_hex(nbr / 16);
	ft_putchar("0123456789abcdef"[nbr % 16]);
}

int	ft_print_ptr(unsigned long long unspecified)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (unspecified == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_to_hex(unspecified);
		print_length += ft_ptr_len(unspecified);
	}
	return (print_length);
}
