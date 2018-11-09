/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_weight_wchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:13:55 by tigre             #+#    #+#             */
/*   Updated: 2018/11/09 21:18:49 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_weight_wchar(wchar_t c)
{
	if (c <= 0x7F)
		return (1);
	else if (c <= 0x7FF)
		return (2);
	else if (c <= 0XFFFF)
		return (3);
	else if (c <= 0x1FFFFF)
		return (4);
	return (0);
}

size_t		ft_strwlen(wchar_t *str)
{
	size_t len;
	int i;

	len = 0;
	i = 0;
	while (str[i])
		len += ft_weight_wchar(str[i++]);
	return (len);
}

size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
