/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:48:54 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/11/07 15:10:53 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putadress(unsigned long ptr, int *len);
void	ft_putnbr(int n, int *len);
void	ft_unsigned_nbr(unsigned int n, int *len);
void	ft_hexadecimal(unsigned int n, int *len, char choose);
int		ft_printf(const char *str, ...);

#endif