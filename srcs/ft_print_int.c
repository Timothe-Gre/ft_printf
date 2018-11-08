/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:19:53 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/08 22:26:39 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

void	print_d_i(void *element, pf_flags flags)
{
	if (flags.check_flags & 0x02)
	{
		modifier[flags.index_m].fct_m(element, flags);	
		return ;
	}
	if (ft_write_p((int)element, flags, 10))
		ft_putnbr_no_minus((int)element);
}

void	print_D(void *element, pf_flags flags)
{
	if (ft_write_p((long int)element, flags, 10))
		ft_putlnbr((long int)element);
}
