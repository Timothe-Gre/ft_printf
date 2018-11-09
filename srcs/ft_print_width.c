/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:28:31 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/09 14:32:38 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_back_w(pf_flags flags, size_t len)
{
	long int tmp;

	tmp = (long int)flags.width - len - flags.precision;
	if ((flags.index_s == 3 || flags.index_s == 4) && flags.check_char & 0x02)
			tmp--;
	if ((flags.index_s == 7 || flags.index_s == 8) && flags.check_char & 0x02)
		tmp -= 2;
	while (tmp > 0)
	{
		ft_putchar(flags.w);
		tmp--;
	}
}
