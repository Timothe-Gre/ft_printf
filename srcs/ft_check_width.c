/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:44 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/09 19:32:03 by ghtouman         ###   ########.fr       */
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

void	ft_print_width_u(uintmax_t element, pf_flags flags, int len)
{
	long int tmp;

	tmp = 0;
	if (flags.width <= flags.precision)
		return ;
	if ((flags.index_s == 3 || flags.index_s == 4) && flags.check_char & 0x02)
		flags.width--;
	if ((flags.index_s == 7 || flags.index_s == 8) && flags.check_char & 0x02)
		flags.width -= 2;
	if (flags.precision > len)
		tmp = flags.precision - len;
	if (flags.width > 0)
		tmp = (long int)flags.width - len - tmp;
	while(tmp > 0)
	{
		ft_putchar_count(&flags.w, 1);
		tmp--;
	}
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
		ft_putchar_count(&flags.w, 1);
		tmp--;
	}
}

void	ft_print_width_s(pf_flags flags, size_t len)
{
	long int tmp;

	tmp = 0;
	if (flags.width < len && flags.width < flags.precision)
		return ;
	if (flags.width > 0 && flags.check_flags & 0x04 && flags.precision <= len)
		flags.width = flags.width - flags.precision;
	else
		tmp = (long int)flags.width - len;
	while(tmp > 0)
	{
		ft_putchar_count(&flags.w, 1);
		tmp--;
	}
}

void	ft_width_unicode(pf_flags flags, wchar_t *str)
{
	int		weight;

	weight = 0;
	if (flags.width <= flags.precision)
		return ;
	if (flags.check_flags & 0x04)
	{
		while (*str && flags.precision > weight)
			weight += ft_weight_wchar(*(str++));
		if (weight > flags.precision)
			weight -= ft_weight_wchar(*(--str));
		flags.width -= weight;
		while(flags.width--)
			ft_putchar_count(&flags.w, 1);
		return;
	}
	while (*str)
		weight += ft_weight_wchar(*(str++));
	if (weight < flags.width)
	{
		flags.width -= weight;
		while(flags.width--)
			ft_putchar_count(&flags.w, 1);
	}
}
