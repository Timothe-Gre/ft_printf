/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_modifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 19:24:49 by tigre             #+#    #+#             */
/*   Updated: 2018/10/30 17:20:58 by tigre            ###   ########.fr       */
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
