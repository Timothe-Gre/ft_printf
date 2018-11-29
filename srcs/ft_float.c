/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:42:42 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/29 15:08:16 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_f(void *element, t_flags flags)
{
	size_t	len;

	len = 1;
	if (flags.index_m == 5 && flags.check_flags & 0x20)
		ft_putnbr_long_f((long double)element, flags, &len);
	else
		ft_putnbr_f((double)element, flags, &len);
	if (flags.check_char & 0x04)
		ft_back_w((long int)element, flags, len);
}
