/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_modifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:32:06 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/06 16:02:31 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

void	ft_check_modifier(pf_flags *flags, char **str)
{
	while (modifier[flags->index_m].flag_m &&
		**str != modifier[flags->index_m].flag_m)
		flags->index_m++;
	if (flags->index_m == 0 && *((*str) + 1) && *((*str) + 1) == 'h')
	{
		flags->index_m = 4;
		flags->check_flags += 0x02;
		(*str) += 2;
	}
	else if (flags->index_m == 1 && *((*str) + 1) && *((*str) + 1) == 'l')
	{
		flags->index_m = 5;
		flags->check_flags += 0x02;
		(*str) += 2;
	}
	else if (flags->index_m < 4)
	{
		flags->check_flags += 0x02;
		(*str)++;
	}
}
