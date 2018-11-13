/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:27 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/13 21:08:40 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_parse_flags(const char *format, va_list ap)
{
	char		*tmp;
	char		*out;
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
				flags = (pf_flags){0, 0, -1, 0, 0, ' ', 0};
				while (!(flags.check_flags & 0x01))
				{
					out = tmp;
					ft_check_characters(&flags, &tmp);
					ft_check_width(&flags, &tmp);
					ft_check_precision(&flags, &tmp);
					ft_check_modifier(&flags, &tmp);
					if (*tmp == '\0')
						return;
					ft_check_specifier(&flags, tmp);
					if (out == tmp && !(flags.check_flags & 0x01))
						break;
				}
				if (*tmp && !(flags.check_flags & 0x01) &&
				!(flags.check_flags & 0x08))
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
