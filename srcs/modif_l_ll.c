/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_l_ll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:11:32 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/09 14:43:15 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		modif_l(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.index_s == 3)
		if (ft_write_p_u((unsigned long int)element, flags, 8))
			ft_putnbr_base((unsigned long int)element, 8, 0, &len);
	if (flags.index_s == 5)
		if (ft_write_p_u((unsigned long int)element, flags, 10))
			ft_putnbr_base((unsigned long int)element, 10, 0, &len);
	if (flags.index_s == 7)
		if (ft_write_p_u((unsigned long int)element, flags, 16))
			ft_putnbr_base((unsigned long int)element, 16, 0, &len);
	if (flags.index_s == 8)
		if (ft_write_p_u((unsigned long int)element, flags, 16))
			ft_putnbr_base((unsigned long int)element, 16, 1, &len);
	if (flags.index_s < 3)
		if (ft_write_p((long int)element, flags, 10))
			ft_putlnbr((long int)element, &len);
	if (flags.check_char & 0x04)
		ft_back_w(flags, len);
}

void		modif_ll(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.index_s == 3)
		if (ft_write_p_u((unsigned long long int)element, flags, 8))
			ft_putnbr_base((unsigned long long int)element, 8, 0, &len);
	if (flags.index_s == 5)
		if (ft_write_p_u((unsigned long long int)element, flags, 10))
			ft_putnbr_base((unsigned long long int)element, 10, 0, &len);
	if (flags.index_s == 7)
		if (ft_write_p_u((unsigned long long int)element, flags, 16))
			ft_putnbr_base((unsigned long long int)element, 16, 0, &len);
	if (flags.index_s == 8)
		if (ft_write_p_u((unsigned long long int)element, flags, 16))
			ft_putnbr_base((unsigned long long int)element, 16, 1, &len);
	if (flags.index_s < 3)
		if (ft_write_p((long long int)element, flags, 10))
			ft_putlnbr((long long int)element, &len);
	if (flags.check_char & 0x04)
		ft_back_w(flags, len);
}
