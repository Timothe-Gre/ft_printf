/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_j_z.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:11:23 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/09 14:42:41 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		modif_j(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.index_s == 3)
		if (ft_write_p_u((uintmax_t)element, flags, 8))
			ft_putnbr_base((uintmax_t)element, 8, 0, &len);
	if (flags.index_s == 5)
		if (ft_write_p_u((uintmax_t)element, flags, 16))
			ft_putnbr_base((uintmax_t)element, 10, 0, &len);
	if (flags.index_s == 7)
		if (ft_write_p_u((uintmax_t)element, flags, 16))
			ft_putnbr_base((uintmax_t)element, 16, 0, &len);
	if (flags.index_s == 8)
		if (ft_write_p_u((intmax_t)element, flags, 16))
			ft_putnbr_base((uintmax_t)element, 16, 1, &len);
	if (flags.index_s < 3)
		if (ft_write_p((intmax_t)element, flags, 10))
			ft_putlnbr((intmax_t)element, &len);
	if (flags.check_char & 0x04)
		ft_back_w(flags, len);
}

void		modif_z(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.index_s == 3)
		if (ft_write_p_u((ssize_t)element, flags, 8))
			ft_putnbr_base((ssize_t)element, 8, 0, &len);
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
		ft_back_w(flags, len);
}
