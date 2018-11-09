/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:30:33 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/09 20:10:36 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	ft_putwchar(wchar_t element)
{
	if (element <= 0x7F)
		ft_putchar(element);
	else if (element <= 0x7FF)
	{
		ft_putchar((element >> 6) + 0xC0);
		ft_putchar((element & 0x3F) + 0x80);
	}
	else if (element <= 0XFFFF)
	{
		ft_putchar((element >> 12) + 0xE0);
		ft_putchar(((element >> 6) & 0x3F) + 0x80);
		ft_putchar((element & 0x3F) + 0x80);
	}
	else if (element <= 0x1FFFFF)
	{
		ft_putchar((element >> 18) + 0xF0);
		ft_putchar(((element >> 12) & 0x3F) + 0x80);
		ft_putchar(((element >> 6) & 0x3F) + 0x80);
		ft_putchar((element & 0x3F) + 0x80);
	}
	g_ret += ft_weight_wchar(element);
}
