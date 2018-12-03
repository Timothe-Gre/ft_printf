/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:42:42 by ghtouman          #+#    #+#             */
/*   Updated: 2018/12/03 15:33:23 by tigre            ###   ########.fr       */
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
	size_t			len;
	unsigned int	p;

	len = 1;
	p = 6;
	if (flags.check_flags & 0x04) 
		p = flags.precision;
	ft_putfloat(element, &len, p);
	// ft_putnbr_f((double)element, flags, &len);
	// if (flags.check_char & 0x04)
		// ft_back_w((long int)element, flags, len);
}
