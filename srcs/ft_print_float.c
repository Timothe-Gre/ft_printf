/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:44:35 by ghtouman          #+#    #+#             */
/*   Updated: 2018/12/04 18:20:43 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static uintmax_t	get_decimal(double f, unsigned int p)
{
	double			u;

	while (p--)
		f *= 10;
	u = f - (uintmax_t)f;
	if (u * 10 > 4)
		f++;
	return ((uintmax_t)f);
}

static uintmax_t	get_ldecimal(long double f, unsigned int p)
{
	long double		u;

	while (p--)
		f *= 10;
	u = f - (uintmax_t)f;
	if (u * 10 > 4)
		f++;
	return ((uintmax_t)f);
}

void				ft_putfloat(double f, size_t *len, unsigned int p)
{
	uintmax_t		n;

	if (f < 0)
	{
		(*len)++;
		ft_putchar_one('-');
		f = -f;
	}
	n = (uintmax_t)f;
	n != 0 ? f -= n : f;
	f >= 0.5 && p == 0 ? n++ : n;
	ft_putlnbr(n, len);
	if (p)
	{
		ft_putchar_one('.');
		(*len)++;
		ft_putlnbr(get_decimal(f, p), len);
	}
}

void				ft_putlfloat(long double f, size_t *len, unsigned int p)
{
	uintmax_t		n;

	if (f < 0)
	{
		(*len)++;
		ft_putchar_one('-');
		f = -f;
	}
	n = (uintmax_t)f;
	n != 0 ? f -= n : f;
	f >= 0.5 && p == 0 ? n++ : n;
	ft_putlnbr(n, len);
	if (p)
	{
		ft_putchar_one('.');
		(*len)++;
		ft_putlnbr(get_ldecimal(f, p), len);
	}
}
