/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 19:24:49 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 17:45:27 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

int		ft_check_specifier(pf_flags *flags, char *str)
{
	while (specifier[flags->index_s].flag_s &&
		*str != specifier[flags->index_s].flag_s)
	{
		flags->index_s++;
	}
	if (flags->index_s < 15)
		flags->check_flags = flags->check_flags + 0x01;
	return (flags->index_s);
}
