/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:12:24 by tigre             #+#    #+#             */
/*   Updated: 2018/10/31 14:38:41 by ghtouman         ###   ########.fr       */
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
	if (flags->precision == 0)
		(*str)++;
}

void ft_write_p_u(uintmax_t element, pf_flags flags, char base)
{

	int len_number;

	len_number = ft_len_number(element, 0, base);
	ft_print_width(element, flags, len_number);
	while (flags.precision > len_number)
	{
		ft_putchar('0');
		flags.precision--;
	}
}

void ft_write_p(intmax_t element, pf_flags flags, char base)
{
	int len_number;

	len_number = ft_len_number(element, 0, base);
	ft_print_width(element, flags, len_number);
	if (element < 0)
	{
		ft_putchar('-');
		flags.precision++;
	}
	while (flags.precision > len_number)
	{
		ft_putchar('0');
		flags.precision--;
	}
}
