/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:22:02 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/10 05:23:44 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

void	print_o(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.check_flags & 0x02)
	{
		modifier[flags.index_m].fct_m(element, flags);
		return ;
	}
	if (flags.check_char & 0x02 && (unsigned int)element == 0 && 
	flags.precision == 0)
		ft_putchar_one('0');
	else if (ft_write_p_u((unsigned int)element, flags, 8))
		ft_putnbr_base((unsigned int)element, 8, 0, &len);
	if (flags.check_char & 0x04)
		ft_back_w((unsigned int)element, flags, len);
}

void	print_u(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.check_flags & 0x02)
	{
		modifier[flags.index_m].fct_m(element, flags);
		return ;
	}
	if (ft_write_p_u((unsigned int)element, flags, 10))
		ft_putnbr_base((unsigned int)element, 10, 0, &len);
	if (flags.check_char & 0x04)
		ft_back_w((unsigned int)element, flags, len);
}

void	print_x(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.check_flags & 0x02)
	{
		modifier[flags.index_m].fct_m(element, flags);
		return ;
	}
	if (ft_write_p_u((unsigned int)element, flags, 16))
		ft_putnbr_base((unsigned int)element, 16, 0, &len);
	if (flags.check_char & 0x04)
		ft_back_w((unsigned int)element, flags, len);
}

void	print_X(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.check_flags & 0x02)
	{
		modifier[flags.index_m].fct_m(element, flags);
		return ;
	}
	if (ft_write_p_u((unsigned int)element, flags, 16))
		ft_putnbr_base((unsigned int)element, 16, 1, &len);
	if (flags.check_char & 0x04)
		ft_back_w((unsigned int)element, flags, len);
}
