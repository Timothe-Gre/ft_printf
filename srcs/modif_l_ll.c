/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_l_ll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:11:32 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/30 16:20:29 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		modif_l(void *element, pf_flags flags)
{
	if ( flags.index_s == 3)
		ft_putnbr_base((unsigned long int)element, 8, 0);
	else if (flags.index_s == 5)
		ft_putnbr_base((unsigned long int)element, 10, 0);
	else if (flags.index_s == 7)
		ft_putnbr_base((unsigned long int)element, 16, 0);
	else if (flags.index_s == 8)
		ft_putnbr_base((unsigned long int)element, 16, 1);
	else
		ft_putnbr((long int)element);
}

void		modif_ll(void *element, pf_flags flags)
{
	if ( flags.index_s == 3)
		ft_putnbr_base((unsigned long long int)element, 8, 0);
	else if (flags.index_s == 5)
		ft_putnbr_base((unsigned long long int)element, 10, 0);
	else if (flags.index_s == 7)
		ft_putnbr_base((unsigned long long int)element, 16, 0);
	else if (flags.index_s == 8)
		ft_putnbr_base((unsigned long long int)element, 16, 1);
	else
		ft_putnbr((long long int)element);
}
