/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_modifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:32:06 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/28 15:24:18 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

void	ft_check_modifier(t_flags *flags, char **str)
{
	int	tmp;

	tmp = 0;
	while (g_modifier[tmp].flag_m && **str != g_modifier[tmp].flag_m)
		tmp++;
	if (tmp == 0 && *((*str) + 1) && *((*str) + 1) == 'h')
	{
		flags->index_m == -1 ? flags->index_m = 4 : flags->index_m;
		flags->check_flags |= 0x02;
		(*str) += 2;
	}
	else if (tmp == 1 && *((*str) + 1) && *((*str) + 1) == 'l')
	{
		flags->index_m = 5;
		flags->check_flags |= 0x02;
		(*str) += 2;
	}
	else if (tmp < 4)
	{
		flags->index_m < tmp ? flags->index_m = tmp : flags->index_m;
		if (flags->index_m == 4)
			flags->index_m = tmp;
		flags->check_flags |= 0x02;
		(*str)++;
	}
}
