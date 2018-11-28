/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:38 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/28 15:25:14 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

int		ft_control(t_flags flags, va_list ap)
{
	void *element;

	element = NULL;
	if (flags.check_flags & 0x01 && flags.index_s < 14)
		element = va_arg(ap, void*);
	if (!(flags.check_flags & 0x01) && flags.check_flags & 0x08)
	{
		charac_zero(element, &flags);
		if (!(flags.check_char & 0x04))
			while (--flags.width)
				ft_putchar_one(flags.w);
		return (0);
	}
	if (flags.check_flags & 0x10)
	{
		if (flags.check_char & 0x01)
			g_character[0].fct_c(element, &flags);
		if (flags.check_char & 0x10)
			g_character[4].fct_c(element, &flags);
	}
	g_specifier[flags.index_s].fct_s(element, flags);
	return (0);
}
