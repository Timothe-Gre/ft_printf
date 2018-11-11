/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:51 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/06 14:31:52 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

int		ft_check_specifier(pf_flags *flags, char *str)
{
	flags->index_s = 0;
	while (specifier[flags->index_s].flag_s &&
		*str != specifier[flags->index_s].flag_s)
	{
		flags->index_s++;
	}
	if (flags->index_s < 15)
		flags->check_flags = flags->check_flags + 0x01;
	return (flags->index_s);
}
