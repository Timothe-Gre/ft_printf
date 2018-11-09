/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:27 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/09 19:34:25 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_parse_flags(const char *format, va_list ap)
{
	char		*tmp;
	pf_flags	flags;

	tmp = (char *)format;
	while (*tmp)
	{
		if (*tmp == '%')
		{
			tmp++;
			if (*tmp == '%')
				ft_putchar_count("%", 1);
			else
			{
				flags = (pf_flags){0, 0, 0, 0, 0, ' ', 0};
				ft_check_characters(&flags, &tmp);
				ft_check_width(&flags, &tmp);
				ft_check_precision(&flags, &tmp);
				ft_check_modifier(&flags, &tmp);
				if ((ft_check_specifier(&flags, tmp) >= 14) && (flags.check_flags > 0))
					return ;
				if (flags.check_flags == 0)
					ft_putchar_count(tmp, 1);
				else
					ft_control(flags, ap);
			}
		}
		else
			ft_putchar_count(tmp, 1);
		tmp++;
	}
}
