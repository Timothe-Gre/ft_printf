/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:19:53 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/27 07:23:51 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_d_i(va_list ap)
{
	int test;
	test = va_arg(ap, int);
	ft_putnbrre(test);
}

// void	print_D(va_list ap, t_list *ma_list)
// {
// 	t_elem		element;
//
// 	element = (t_elem){0, 0, NULL};
// 	if (check_modifie(ma_list, ap, &element, "int"))
// 	{
// 		ft_putnbrre(element.elem);
// 		return ;
// 	}
// 	element.elem = va_arg(ap, long int);
// 	ft_putnbrre(element.elem);
// }
//
// void	print_O(va_list ap, t_list *ma_list)
// {
// 	t_elem		element;
//
// 	element = (t_elem){0, 0, NULL};
// 	if (check_modifie(ma_list, ap, &element, "u_int"))
// 	{
// 		ft_putstr(ft_itoa_base_maj(element.u_elem, 8, "0123456789abcdef"));
// 		return ;
// 	}
// 	element.u_elem = va_arg(ap, unsigned long int);
// 	ft_putstr(ft_itoa_base_maj(element.u_elem, 8, "0123456789abcdef"));
// }
//
// void	print_U(va_list ap, t_list *ma_list)
// {
// 	t_elem		element;
//
// 	element = (t_elem){0, 0, NULL};
// 	if (check_modifie(ma_list, ap, &element, "u_int"))
// 	{
// 		ft_putstr(ft_itoa_base_maj(element.u_elem, 10, "0123456789abcdef"));
// 		return ;
// 	}
// 	element.u_elem = va_arg(ap, unsigned long int);
// 	ft_putstr(ft_itoa_base_maj(element.u_elem, 10, "0123456789abcdef"));
// }
