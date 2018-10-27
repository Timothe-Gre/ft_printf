/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 19:24:49 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 01:49:13 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

void	ft_check_modifier(pf_flags **pf_list, char *str)
{
	(*pf_list)->index_m = 0;
	while (modifier[(*pf_list)->index_m].flag_m &&
			*str != modifier[(*pf_list)->index_m].flag_m)
		(*pf_list)->index_m++;
	if ((*pf_list)->index_m < 6)
		(*pf_list)->check_flags += 0x02;
}
