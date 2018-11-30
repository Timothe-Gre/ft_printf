/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:44:35 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/30 17:37:48 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		power(int n, int p)
{
	int		ret;

	ret = 1;
	while (p--)
		ret *= n;

	return (ret);
}

void		ft_putfloat(long double f, unsigned int p)
{
	long	n;

	if (f < 0)
	{
		ft_putchar('-');
		f = -f;
	}
	n = (long)f;
	if (p == 0 && (f - n >= 0.5))
		n++;
	ft_putlnbr(n);
	f -= n;
	if (p && f > 0)
	{
		ft_putchar('.');
		f = (f * power(10, p));
		n = (long)f;
		f - n >= 0.5 ? n++ : n;
		ft_putlnbr(n);
	}
}

void	ft_putfloat(double f, unsigned int p)
{
	long	n;

	if (f < 0)
	{
		ft_putchar('-');
		f = -f;
	}
	n = (long)f;
	if (p == 0 && (f - n >= 0.5))
		n++;
	ft_putlnbr(n);
	f -= n;
	if (p && f > 0)
	{
		ft_putchar('.');
		f = (f * power(10, p));
		n = (long)f;
		f - n >= 0.5 ? n++ : n;
		ft_putlnbr(n);
	}
}
