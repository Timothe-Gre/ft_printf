/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:44:35 by ghtouman          #+#    #+#             */
/*   Updated: 2018/12/03 22:49:13 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		last_f(double f, unsigned int p)
{
	int			pos;
	uintmax_t	n;
	
	pos = p;
	while (p--)
		f *= 10;
	f += 0.1;
	n = (uintmax_t)f;
	while (n % 10 == 0)
	{
		pos--;
		n /= 10;
	}
	return (pos);
}

static void		decimal_float(double f, size_t *len, unsigned int p)
{
	uintmax_t	n;
	int			pos;

	(*len)++;
	pos = last_f(f, p);
	ft_putchar_one('.');
	while (p--)
	{
			
		f *= 10;
		n = (uintmax_t)f;
		if (pos == 1)
			n++;
		f = f - n;
		f >= 0.5 && p == 0 ? n++ : n;
		ft_putchar_one(n + '0');
		(*len)++;
		pos--;
	}
}

void			ft_putfloat(double f, size_t *len, unsigned int p)
{
	int			mem;
	uintmax_t	n;

	mem = 0;
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
		decimal_float(f, len, p);
}

void			ft_putlfloat(long double f, size_t *len, unsigned int p)
{
	uintmax_t	n;

	if (f < 0)
	{
		(*len)++;
		ft_putchar_one('-');
		f = -f;
	}
	n = (uintmax_t)f;
	f -= n;
	f >= 0.5 && p == 0 ? n++ : n;
	ft_putlnbr(n, len);
	if (p)
	{
		(*len)++;
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
