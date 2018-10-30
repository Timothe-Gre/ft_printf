/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_j_z.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:11:23 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/30 16:18:12 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		modif_j(void *element, pf_flags flags)
{
	if ( flags.index_s == 3)
		ft_putnbr_base((uintmax_t)element, 8, 0);
	else if (flags.index_s == 5)
		ft_putnbr_base((uintmax_t)element, 10, 0);
	else if (flags.index_s == 7)
		ft_putnbr_base((uintmax_t)element, 16, 0);
	else if (flags.index_s == 8)
		ft_putnbr_base((uintmax_t)element, 16, 1);
	else
		ft_putnbr((intmax_t)element);
}

void		modif_z(void *element, pf_flags flags)
{
	if ( flags.index_s == 3)
		ft_putnbr_base((ssize_t)element, 8, 0);
	else if (flags.index_s == 5)
		ft_putnbr_base((ssize_t)element, 10, 0);
	else if (flags.index_s == 7)
		ft_putnbr_base((ssize_t)element, 16, 0);
	else if (flags.index_s == 8)
		ft_putnbr_base((ssize_t)element, 16, 1);
	else
		ft_putnbr((size_t)element);
}
