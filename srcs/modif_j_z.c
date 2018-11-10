/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_j_z.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:11:23 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/10 05:14:57 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		modif_j(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.index_s == 3)
	{
		if ((uintmax_t)element == 0 && flags.precision == 0 &&
		flags.check_char & 0x02)
			ft_putchar_one('0');
		else if (ft_write_p_u((uintmax_t)element, flags, 8))
			ft_putllnbr_base((uintmax_t)element, 8, 0, &len);
	}
	if (flags.index_s == 5)
		if (ft_write_p_u((uintmax_t)element, flags, 16))
			ft_putllnbr_base((uintmax_t)element, 10, 0, &len);
	if (flags.index_s == 7)
		if (ft_write_p_u((uintmax_t)element, flags, 16))
			ft_putllnbr_base((uintmax_t)element, 16, 0, &len);
	if (flags.index_s == 8)
		if (ft_write_p_u((intmax_t)element, flags, 16))
			ft_putllnbr_base((uintmax_t)element, 16, 1, &len);
	if (flags.index_s < 3)
		if (ft_write_p((intmax_t)element, flags, 10))
			ft_putnbr_no_minus((intmax_t)element, &len);
	if (flags.check_char & 0x04)
		ft_back_w((intmax_t)element, flags, len);
}

void		modif_z(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.index_s == 3)
	{	
		if ((ssize_t)element == 0 && flags.precision == 0 &&
		flags.check_char & 0x02)
			ft_putchar_one('0');
		else if (ft_write_p_u((ssize_t)element, flags, 8))
			ft_putnbr_base((ssize_t)element, 8, 0, &len);
	}
	if (flags.index_s == 5)
		if (ft_write_p_u((ssize_t)element, flags, 10))
			ft_putnbr_base((ssize_t)element, 10, 0, &len);
	if (flags.index_s == 7)
		if (ft_write_p_u((ssize_t)element, flags, 16))
			ft_putnbr_base((ssize_t)element, 16, 0, &len);
	if (flags.index_s == 8)
		if (ft_write_p_u((ssize_t)element, flags, 16))
			ft_putnbr_base((ssize_t)element, 16, 1, &len);
	if (flags.index_s < 3)
		if (ft_write_p((size_t)element, flags, 10))
			ft_putlnbr((size_t)element, &len);
	if (flags.check_char & 0x04)
		ft_back_w((size_t)element, flags, len);
}
