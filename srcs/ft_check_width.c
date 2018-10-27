/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:33:13 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 17:57:22 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_width(pf_flags *flags, char **str)
{
	if (**str < '0' || **str > '9')
		return ;
	while(**str && **str >= '0' && **str <= '9')
	{
		flags->width = flags->width * 10 + (**str - '0');
		(*str)++;
	}
	flags->check_flags += 0x08;
	(*str)++;
}
