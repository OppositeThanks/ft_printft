/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:03:05 by lperrin           #+#    #+#             */
/*   Updated: 2022/06/02 11:38:45 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hex_maj(unsigned int tohex)
{
	static int	printf_length;

	printf_length = 0;
	if (tohex >= 16)
		ft_print_hex_maj(tohex / 16);
	ft_putchar("0123456789ABCDEF"[tohex % 16]);
	printf_length++;
	return (printf_length);
}

int	ft_print_hex_min(unsigned int tohex)
{
	static int	printf_length;

	printf_length = 0;
	if (tohex >= 16)
		ft_print_hex_min(tohex / 16);
	ft_putchar("0123456789abcdef"[tohex % 16]);
	printf_length++;
	return (printf_length);
}
