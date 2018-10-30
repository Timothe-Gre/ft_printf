/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_h_hh.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:02:44 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/30 16:11:52 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		modif_h(void *element, pf_flags flags)
{
	if ( flags.index_s == 3)
		ft_putnbr_base((unsigned short int)element, 8, 0);
	else if (flags.index_s == 5)
		ft_putnbr_base((unsigned short int)element, 10, 0);
	else if (flags.index_s == 7)
		ft_putnbr_base((unsigned short int)element, 16, 0);
	else if (flags.index_s == 8)
		ft_putnbr_base((unsigned short int)element, 16, 1);
	else
		ft_putnbr((short int)element);
}

void		modif_hh(void *element, pf_flags flags)
{
	if ( flags.index_s == 3)
		ft_putnbr_base((unsigned char)element, 8, 0);
	else if (flags.index_s == 5)
		ft_putnbr_base((unsigned char)element, 10, 0);
	else if (flags.index_s == 7)
		ft_putnbr_base((unsigned char)element, 16, 0);
	else if (flags.index_s == 8)
		ft_putnbr_base((unsigned char)element, 16, 1);
	else
		ft_putnbr((char)element);
}
