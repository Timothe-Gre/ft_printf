/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:12:24 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 17:38:13 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_precision(pf_flags *flags, char **str)
{

	if (**str != '.')
		return;
	(*str)++;
	while (**str && **str >= '0' && **str <= '9')
	{
		flags->precision = flags->precision * 10 + (**str - '0');
		(*str)++;
	}
	flags->check_flags += 0x04;
	(*str)++;
}