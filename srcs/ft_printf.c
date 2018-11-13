/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:00 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/13 20:50:20 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

void	ft_putchar_count(char *c, size_t len)
{
	write(1, c, len);
	g_ret += len;
}

void	ft_putchar_one(char c)
{
	write(1, &c, 1);
	g_ret++;
}

void 	ft_putchar_null(pf_flags flags)
{
	int diff;
	long int tmp;

	diff = 0;
	if (flags.check_flags & 0x04 && flags.precision == 0)
	{
		diff = 6;
		tmp = (long int)flags.width;
	}
	else if (flags.precision > 0 && flags.precision < 6)
	{
		diff = 6 - flags.precision;
		tmp = (long int)flags.width - (long int)flags.precision;
	}
	else
		tmp = (long int)flags.width - 6;
	if (!(flags.check_char & 0x04))
		while (tmp-- > 0)
			ft_putchar_count(&flags.w, 1);
	ft_putchar_count("(null)", 6 - diff);
	if (flags.check_char & 0x04)
		while (tmp-- > 0)
			ft_putchar_count(&flags.w, 1);
}

int			ft_printf(const char *format, ...)
{	va_list		ap;
	int			num_var;

	g_ret = 0;
	num_var = 0;
	va_start(ap, format);
	ft_found_unicode(ap, format, &num_var);
	va_end(ap);
	va_start(ap, format);
	ft_parse_flags(format, ap);
	va_end(ap);
	return (g_ret);
}
