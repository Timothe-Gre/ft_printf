/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:44:35 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/29 22:18:02 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//
// void 	ft_putnbr_long_f(long double n, t_flags flags, size_t *len)
// {
//
// }

void 	ft_putnbr_f(double n, t_flags flags, size_t *len)
{
	(void)len;
	(void)flags;
	printf("%f\n", n);
}
