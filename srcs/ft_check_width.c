/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:33:13 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 01:19:19 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_width(pf_flags **pf_list, char *str)
{
	(*pf_list)->width = 0;
	if (*str < '0' && *str > '9')
		return ;
	while(*str && *str >= '0' && *str <= '9')
	{
		(*pf_list)->width = (*pf_list)->width * 10 + (*str - '0');
		str++;
	}
	(*pf_list)->check_flags += 0x08;
	str++;
}
