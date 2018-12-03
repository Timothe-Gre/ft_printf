/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:44:35 by ghtouman          #+#    #+#             */
/*   Updated: 2018/12/03 15:50:59 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putfloat(double f, size_t *len, unsigned int p)
{
	uintmax_t	n;

	if (f < 0)
	{
		ft_putchar_one('-');
		f = -f;
	}
	n = (uintmax_t)f;
	f -= n;
	f >= 0.5 && p == 0 ? n++ : n;
	ft_putlnbr(n, len);
	if (p)
	{
		ft_putchar_one('.');
		while (p--)
		{
			f *= 10;
			n = (uintmax_t)f;
			f -= n;
			f >= 0.5 && p == 0 ? n++ : n;
			ft_putchar_one(n + '0');
			(*len)++;
		}
	}
}

void	ft_putlfloat(long double f, size_t *len, unsigned int p)
{
	uintmax_t	n;

	if (f < 0)
	{
		ft_putchar_one('-');
		f = -f;
	}
	n = (uintmax_t)f;
	f -= n;
	f >= 0.5 && p == 0 ? n++ : n;
	ft_putlnbr(n, len);
	if (p)
	{
		ft_putchar_one('.');
		while (p--)
		{
			f *= 10;
			n = (uintmax_t)f;
			f -= n;
			f >= 0.5 && p == 0 ? n++ : n;
			ft_putchar_one(n + '0');
			(*len)++;
		}
	}
}
