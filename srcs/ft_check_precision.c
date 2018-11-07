/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:59 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/07 14:04:22 by ghtouman         ###   ########.fr       */
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
}

void ft_write_p_u(uintmax_t element, pf_flags flags, char base)
{
	int len_number;

	len_number = ft_len_number_u(element, 0, base);
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


//
// void ft_write_char(intmax_t element, pf_flags flags, char base)
// {
// 	int len_number;
//
// 	len_number = ft_len_number(element, 0, base);
// 	ft_print_width(element, flags, len_number);
// 	if (element < 0)
// 	{
// 		ft_putchar('-');
// 		flags.precision++;
// 	}
// 	while (flags.precision > len_number)
// 	{
// 		ft_putchar('0');
// 		flags.precision--;
// 	}
// }
