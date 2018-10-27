/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 19:24:49 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 01:48:58 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

int		ft_check_specifier(pf_flags **pf_list, char *str)
{
	(*pf_list)->index_s = 0;
	while (specifier[(*pf_list)->index_s].flag_s && 
			*str != specifier[(*pf_list)->index_s].flag_s)
		(*pf_list)->index_s++;
	if ((*pf_list)->index_s < 15)
		(*pf_list)->check_flags = (*pf_list)->check_flags + 0x01;
	return ((*pf_list)->index_s);
}
