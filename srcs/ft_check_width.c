/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:44 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/07 15:15:28 by ghtouman         ###   ########.fr       */
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
	long int tmp;

	tmp = 0;
	if (flags.width <= flags.precision)
		return ;
	if (element < 0)
		flags.width--;
	if (flags.precision > len)
		tmp = flags.precision - len;
	if (flags.width > 0)
		tmp = (long int)flags.width - len - tmp;
	while(tmp > 0)
	{
		ft_putchar(' ');
		tmp--;
	}
}

void	ft_print_width_s(pf_flags flags, size_t len)
{
	if (flags.width <= flags.precision)
		return ;
	if (flags.width > 0 && flags.check_flags & 0x04)
		flags.width = flags.width - flags.precision;
	else
		flags.width = flags.width - len;
	while(flags.width > 0)
	{
		ft_putchar(' ');
		flags.width--;
	}
}
