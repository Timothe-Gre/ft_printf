/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:22:04 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/25 18:10:59 by tigre            ###   ########.fr       */
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
}
