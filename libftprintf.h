/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:55:49 by lperrin           #+#    #+#             */
/*   Updated: 2022/06/02 11:36:21 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *thing, ...);
int		ft_format_checker(va_list args, const char format);
int		ft_putchar(int thing);
int		ft_printnbr(int n);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printpercent(void);
char	*ft_itoa(int nbr);
int		get_len(int nbr);
int		neg_to_pos(int nbr);
int		ft_print_ptr(unsigned long long unspecified);
void	ft_to_hex(unsigned long long nbr);
int		ft_ptr_len(unsigned long long num);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex_maj(unsigned int tohex);
int		ft_print_hex_min(unsigned int tohex);

#endif