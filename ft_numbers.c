/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:39:00 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/11/07 13:46:10 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadress(unsigned long ptr, int *len)
{
	char	str[25];
	char	*hexa_base;
	int		i;

	i = 0;
	hexa_base = "0123456789abcdef";
	if (ptr == 0)
	{
		*len += write(1, "(nil)", 5);
		return ;
	}
	else
	{
		write(1, "0x", 2);
		(*len) += 2;
	}
	while (ptr != 0)
	{
		str[i] = hexa_base[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], len);
}

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		n = -n;
		ft_putnbr(n, len);
	}
	else
	{
		if (n >= 10)
			ft_putnbr(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
}

void	ft_unsigned_nbr(unsigned int n, int *len)
{
	if (n >= 10)
		ft_unsigned_nbr(n / 10, len);
	ft_putchar(n % 10 + '0', len);
}

void	ft_hexadecimal(unsigned int n, int *len, char choose)
{
	char	str[25];
	char	*hexa_base;
	int		i;

	i = 0;
	if (choose == 'x')
		hexa_base = "0123456789abcdef";
	else
		hexa_base = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (n != 0)
	{
		str[i] = hexa_base[n % 16];
		n = n / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar(str[i], len);
	}
}
