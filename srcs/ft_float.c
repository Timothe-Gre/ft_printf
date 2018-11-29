/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:42:42 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/29 22:19:09 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

void		print_lf(long double element, t_flags flags)
{
	size_t len;
	(void)element;
	(void)flags;
	printf("%Lf\n", element);
	len = 1;
}


void		print_f(double element, t_flags flags)
{
	size_t	len;

	len = 1;
	ft_putnbr_f(element, flags, &len);
	// ft_putnbr_f((double)element, flags, &len);
	// if (flags.check_char & 0x04)
		// ft_back_w((long int)element, flags, len);
}
