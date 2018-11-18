/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:59 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/18 05:45:23 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

void	ft_check_precision(pf_flags *flags, char **str)
{
	flags->precision = 0;
	if (**str != '.')
		return;
	(*str)++;
	while (**str && **str >= '0' && **str <= '9')
	{
		flags->precision = flags->precision * 10 + (**str - '0');
		(*str)++;
	}
	flags->check_flags |= 0x04;
}

int		ft_write_p_u(uintmax_t element, pf_flags flags, char base)
{
	int len_number;
	if (element == 0 && flags.check_flags & 0x04 && flags.precision == 0)
	{
		ft_print_width_u(element, flags, 0);
		return (0);
	}
	len_number = ft_len_number_u(element, 0, base);
	if (flags.check_char & 0x01 && flags.check_char & 0x02 && (!(flags.check_flags & 0x04)))
		character[1].fct_c((void*)element, &flags);
	if (!(flags.check_char & 0x04))
		ft_print_width_u(element, flags, len_number);
	if (flags.check_char & 0x01 && flags.check_char & 0x02 && flags.check_flags & 0x04)
		character[1].fct_c((void*)element, &flags);
	if (flags.check_char & 0x02 && !(flags.check_char & 0x01))
	{
		if (flags.precision > (unsigned int)len_number &&
		(flags.index_s == 3 || flags.index_s == 4))
			flags.precision--;
		character[1].fct_c((void*)element, &flags);
	}
	while (flags.precision-- > (unsigned int)len_number)
		ft_putchar_count("0", 1);
	return (1);
}

void	ft_print_sign(intmax_t element, pf_flags *flags)
{
	if (element < 0)
	{
		ft_putchar_count("-", 1);
		flags->precision++;
	}
	if (element >= 0  && flags->check_char & 0x08)
	{
		ft_putchar_count("+", 1);
	}
}

int		ft_write_p(intmax_t element, pf_flags flags, char base)
{
	int len_number;

	if (element == 0 && flags.check_flags & 0x04 && flags.precision == 0)
	{
		if (flags.check_char & 0x04)
			ft_print_sign(element, &flags);
		if (!(flags.check_char & 0x04))
		{
			ft_print_width(element, flags, 0);
			ft_print_sign(element, &flags);
		}
		return (0);
	}
	len_number = ft_len_number(element, 0, base);
	if (flags.check_char & 0x01 && element != 0 && (!(flags.check_flags & 0x04)))
		ft_print_sign(element, &flags);
	if (!(flags.check_char & 0x04))
		ft_print_width(element, flags, len_number);
	if (flags.check_char & 0x01 && element != 0 && flags.check_flags & 0x04)
		ft_print_sign(element, &flags);
	if (flags.check_char & 0x01 && element == 0)
		ft_print_sign(element, &flags);
	if (!(flags.check_char & 0x01))
		ft_print_sign(element, &flags);
	while (flags.precision-- > (unsigned int)len_number)
		ft_putchar_count("0", 1);
	return (1);
}
