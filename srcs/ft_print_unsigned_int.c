/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:22:02 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/31 14:32:57 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

void	print_o(void *element, pf_flags flags)
{
	if (flags.check_flags & 0x02)
	{
		modifier[flags.index_m].fct_m(element, flags);
		return ;
	}
	ft_write_p_u((unsigned int)element, flags, 8);
	ft_putnbr_base((unsigned int)element, 8, 0);
}

void	print_u(void *element, pf_flags flags)
{
	if (flags.check_flags & 0x02)
	{
		modifier[flags.index_m].fct_m(element, flags);
		return ;
	}
	ft_write_p_u((unsigned int)element, flags, 10);
	ft_putnbr_base((unsigned int)element, 10, 0);
}

void	print_x(void *element, pf_flags flags)
{
	if (flags.check_flags & 0x02)
	{
		modifier[flags.index_m].fct_m(element, flags);
		return ;
	}
	ft_write_p_u((unsigned int)element, flags, 16);
	ft_putnbr_base((unsigned int)element, 16, 0);
}

void	print_X(void *element, pf_flags flags)
{
	if (flags.check_flags & 0x02)
	{
		modifier[flags.index_m].fct_m(element, flags);
		return ;
	}
	ft_write_p_u((unsigned int)element, flags, 16);
	ft_putnbr_base((unsigned int)element, 16, 1);
}


// void	print_o(void *element)
// {
// 	ft_putnbr_base((unsigned int)element, 8, 0);
// }

// void 	print_u(va_list ap, t_list *ma_list)
// {
// 	t_elem		element;
//
// 	element = (t_elem){0, 0, NULL};
// 	if (check_modifie(ma_list, ap, &element, "u_int"))
// 	{
//
// 		ft_putstr(ft_itoa_base_u(element.u_elem, 10));
// 		return ;
// 	}
// 	element.u_elem = va_arg(ap, unsigned int);
// 	ft_putstr(ft_itoa_base_u(element.u_elem, 10));
// }
//
// void	print_x(va_list ap, t_list *ma_list)
// {
// 	t_elem		element;
//
// 	element = (t_elem){0, 0, NULL};
// 	if (check_modifie(ma_list, ap, &element, "u_int"))
// 	{
// 		ft_putstr(ft_itoa_base_maj(element.u_elem, 16, "0123456789abcdef"));
// 		return ;
// 	}
// 	element.u_elem = va_arg(ap, unsigned int);
// 	ft_putstr(ft_itoa_base_maj(element.u_elem, 16, "0123456789abcdef"));
// }
//
// void 	print_X(va_list ap, t_list *ma_list)
// {
// 	t_elem		element;
//
// 	element = (t_elem){0, 0, NULL};
// 	if (check_modifie(ma_list, ap, &element, "u_int"))
// 	{
// 		ft_putstr(ft_itoa_base_maj(element.u_elem, 16, "0123456789ABCDEF"));
// 		return ;
// 	}
// 	element.u_elem = va_arg(ap, unsigned int);
// 	ft_putstr(ft_itoa_base_maj(element.u_elem, 16, "0123456789ABCDEF"));
// }
