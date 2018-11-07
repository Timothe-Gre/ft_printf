/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:00 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/06 14:31:01 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

int			ft_printf(const char *format, ...)
{	va_list		ap;
	size_t		ret;

	ret = 0;
	va_start(ap, format);
	if (!(ft_parse_flags(format, ap, &ret)))
		return (0);
	va_end(ap);
	return (ret);
}
