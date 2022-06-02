/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:46:38 by lperrin           #+#    #+#             */
/*   Updated: 2022/05/30 17:53:51 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_unsigned(unsigned int n)
{
	static int	i;

	i = 0;
	if (n >= 10)
	{
		ft_print_unsigned(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
	i++;
	return (i);
}
