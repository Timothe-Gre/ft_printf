/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_modifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 19:24:49 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 07:27:34 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

void	ft_check_modifier(pf_flags *flags, char *str)
{
	flags->index_m = 0;
	while (modifier[flags->index_m].flag_m &&
			*str != modifier[flags->index_m].flag_m)
		flags->index_m++;
	if (flags->index_m < 6)
		flags->check_flags += 0x02;
}
