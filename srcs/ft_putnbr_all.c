/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:22:02 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/08 19:11:04 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int n, unsigned int b, char maj)
{
	if (n >= b)
		ft_putnbr_base(n / b, b, maj);
	if (n % b < 10)
		ft_putchar(n % b + '0');
	else if (maj == 1)
		ft_putchar(n % b + 'A' - 10);
	else
		ft_putchar(n % b + 'a' - 10);
}

void	ft_putlnbr_base(unsigned long n, unsigned int b, char maj)
{
	if (n >= b)
		ft_putlnbr_base(n / b, b, maj);
	if (n % b < 10)
		ft_putchar(n % b + '0');
	else if (maj == 1)
		ft_putchar(n % b + 'A' - 10);
	else
		ft_putchar(n % b + 'a' - 10);
}

void	ft_putllnbr_base(uintmax_t n, uintmax_t b, char maj)
{
	if (n >= b)
		ft_putnbr_base(n / b, b, maj);
	if (n % b < 10)
		ft_putchar(n % b + '0');
	else if (maj == 1)
		ft_putchar(n % b + 'A' - 10);
	else
		ft_putchar(n % b + 'a' - 10);
}

void	ft_putlnbr(long int n)
{
	if (n == -9223372036854775808)
		return (ft_putstr("-9223372036854775808"));
	if (n < 0)
	{
		n = -n;
		// ft_putchar('-');
	}
	if (n >= 10)
		ft_putlnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putnbr_no_minus(intmax_t n)
{
	if (n < 0)
	{
		n = -n;
		// ft_putchar('-');
	}
	if (n >= 10)
		ft_putnbr_no_minus(n / 10);
	ft_putchar((n  % 10) + '0');
}
