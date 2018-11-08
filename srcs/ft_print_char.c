/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:19:37 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/08 22:47:49 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_c(void *element, pf_flags flags)
{
	if (flags.index_m == 1)
	{
		print_C(element, flags);
		return ;
	}
	ft_print_width_s(flags, 1);
	ft_putchar((char)element);
}

void	print_C(void *element, pf_flags flags)
{
	wchar_t gheram;

	gheram = (wchar_t)element;
	if (flags.check_flags & 0x08)
		ft_width_unicode(flags, (wchar_t*)element);
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
	if (*str && flags.precision > 0)
	{
		while (*str && flags.precision > 0)
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
	wchar_t		*str;
	size_t		i;
	size_t		weight;
	long int	p;

	str = (wchar_t*)element;
	i = 0;
	if (flags.check_flags & 0x08)
		ft_width_unicode(flags, str);
	if (flags.check_flags & 0x04)
	{
		p = (long int)flags.precision;
		while (str[i] && p > 0)
		{
			weight = ft_weight_wchar(str[i]);
			if (p >= weight)
				ft_putwchar(str[i++]);
			p = p - weight;
		}
	}
	else
		ft_putwstr((wchar_t*)element);
}
