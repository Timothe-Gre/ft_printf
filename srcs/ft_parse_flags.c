/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 19:13:55 by tigre             #+#    #+#             */
/*   Updated: 2018/10/29 13:03:02 by ghtouman         ###   ########.fr       */
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
			flags = (pf_flags){0, 0, 0, 0, 0, 0};
			ft_check_characters(&flags, &tmp);
			ft_check_width(&flags, &tmp);
			ft_check_precision(&flags, &tmp);
			ft_check_modifier(&flags, &tmp);
			if (ft_check_specifier(&flags, tmp) >= 15)
				return (0);
			ft_control(flags, ap);
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
