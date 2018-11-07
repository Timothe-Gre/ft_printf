/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:27 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/07 14:04:57 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_parse_flags(const char *format, va_list ap, size_t *ret)
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
				ft_putchar('%');
			else
			{
				flags = (pf_flags){0, 0, 0, 0, 0, 0};
				ft_check_characters(&flags, &tmp);
				ft_check_width(&flags, &tmp);
				ft_check_precision(&flags, &tmp);
				ft_check_modifier(&flags, &tmp);
				if ((ft_check_specifier(&flags, tmp) >= 14) && (flags.check_flags > 0))
					return (0);
				if (flags.check_flags == 0)
					ft_putchar(*tmp);
				else
					ft_control(flags, ap);
			}
		}
		else
		{
			ft_putchar(*tmp);
			(*ret)++;
		}
		tmp++;

	}
	return (*ret);
}
