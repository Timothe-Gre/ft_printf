/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 06:14:17 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 07:39:27 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

int		ft_print(pf_flags flags, va_list ap)
{
	// if (flags.check_flags && 0x10)
	// 	check_combinaison_char(flags);
	// if (flags.check_flags && 0x08)
	// 	check_combinaison_width(flags);
	// if (flags.check_flags && 0x04)
	// 	check_combinaison_precision(flags);
	// if (flags.check_flags && 0x02)
	// 	check_combinaison_modifier(flags);
	if (flags.check_flags && 0x01)
		specifier[flags.index_m].fct(ap);
	return (0);
}
