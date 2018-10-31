/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:33:13 by tigre             #+#    #+#             */
/*   Updated: 2018/10/31 15:02:23 by ghtouman         ###   ########.fr       */
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
	if (flags->width == 0)
		(*str)++;
}

void	ft_print_width(intmax_t element, pf_flags flags, int len)
{
	int diff;

	diff = 0;
	if (flags.width < flags.precision)
		return ;
	if (element < 0)
		flags.width--;
	if (flags.precision > len)
		diff = flags.precision - len;
	if (flags.width > 0)
		flags.width = flags.width - len - diff;
	while(flags.width > 0)
	{
		ft_putchar(' ');
		flags.width--;
	}
}
