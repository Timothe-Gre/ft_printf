/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 18:39:51 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 07:23:52 by ghtouman         ###   ########.fr       */
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
