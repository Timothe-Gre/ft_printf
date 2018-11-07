/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:19:37 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/07 16:21:43 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_c(void *element, pf_flags flags)
{
	ft_putchar((char)element);
}

void	print_C(void *element, pf_flags flags)
{
	wchar_t gheram;

	gheram = (wchar_t)element;
	if ((gheram > 255 && MB_CUR_MAX != 4) || gheram < 0x0 ||
		(gheram >= 0xd800 && gheram <= 0xdfff) || (gheram > 0x10ffff))
		return ;
	else if (gheram > 0x7f && gheram <= 0xff && MB_CUR_MAX != 4)
		ft_putchar(gheram);
	else
		ft_putwchar(gheram);
}

void	print_s(void *element, pf_flags flags)
{
	char *str;
	if (flags.index_m == 1)
	{
		print_S(element, flags);
		return ;
	}
	str = (char*)element;
	ft_print_width_s(flags, ft_strlen(str));
	if ((flags.check_flags & 0x04) && flags.precision == 0)
		return ;

	if (flags.precision > 0)
	{
		while (flags.precision > 0)
		{
			ft_putchar(*str++);
			flags.precision--;
		}
		return ;
	}
	ft_putstr(str);
}

void	print_S(void *element, pf_flags flags)
{
	ft_putwstr((wchar_t*)element);
}
