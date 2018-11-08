/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_h_hh.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:02:44 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/08 22:18:04 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		modif_h(void *element, pf_flags flags)
{
	if (flags.index_s == 3)
	{
		if (ft_write_p_u((unsigned short int)element, flags, 8))
			ft_putnbr_base((unsigned short int)element, 8, 0);
	}
	else if (flags.index_s == 5)
	{
		if (ft_write_p_u((unsigned short int)element, flags, 10))
			ft_putnbr_base((unsigned short int)element, 10, 0);
	}
	else if (flags.index_s == 7)
	{
		if (ft_write_p_u((unsigned short int)element, flags, 16))
			ft_putnbr_base((unsigned short int)element, 16, 0);
	}
	else if (flags.index_s == 8)
	{
		if (ft_write_p_u((unsigned short int)element, flags, 16))
			ft_putnbr_base((unsigned short int)element, 16, 1);
	}
	else
	{
		if (ft_write_p((short int)element, flags, 10))
			ft_putnbr_no_minus((short int)element);
	}
}

void		modif_hh(void *element, pf_flags flags)
{
	if ( flags.index_s == 3)
	{
		if (ft_write_p_u((unsigned char)element, flags, 8))
			ft_putnbr_base((unsigned char)element, 8, 0);
	}
	else if (flags.index_s == 5)
	{
		if (ft_write_p_u((unsigned char)element, flags, 10))
			ft_putnbr_base((unsigned char)element, 10, 0);
	}
	else if (flags.index_s == 7)
	{
		if (ft_write_p_u((unsigned char)element, flags, 16))
			ft_putnbr_base((unsigned char)element, 16, 0);
	}
	else if (flags.index_s == 8)
	{
		if (ft_write_p_u((unsigned char)element, flags, 16))
			ft_putnbr_base((unsigned char)element, 16, 1);
	}
	else
	{
		if (ft_write_p((char)element, flags, 10))
			ft_putnbr((char)element);
	}
}
