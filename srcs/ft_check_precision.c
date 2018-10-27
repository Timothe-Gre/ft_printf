/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:12:24 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 01:18:55 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_precision(pf_flags **pf_list, char *str)
{
	if (*str != '.')
		return;
	str++;
	(*pf_list)->precision = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		(*pf_list)->precision = (*pf_list)->precision * 10 + (*str - '0');
		str++;
	}
	(*pf_list)->check_flags += 0x04;
	str++;
}
