/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:41:16 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/20 15:35:56 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base_u(unsigned long value, int base)
{
	unsigned long	len;
	unsigned long	tmp;
	char			*str;
	char			*base_str;

	str = NULL;
	base_str = ft_strdup("0123456789abcdef");
	len = 1;
	tmp = value;
	while ((tmp /= base) > 0)
		len++;
	if (!(str = ft_strnew(len)))
		return (0);
	str[len] = '\0';
	while (len)
	{
		str[--len] = base_str[value % base];
		value /= base;
	}
	return (str);
}
