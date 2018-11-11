/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:00 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/09 23:01:08 by tigre            ###   ########.fr       */
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

int			ft_printf(const char *format, ...)
{	va_list		ap;

	g_ret = 0;
	va_start(ap, format);
	ft_parse_flags(format, ap);
	va_end(ap);
	return (g_ret);
}
