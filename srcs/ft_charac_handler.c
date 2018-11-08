/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charac_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:20:15 by tigre             #+#    #+#             */
/*   Updated: 2018/11/08 22:02:32 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	charac_plus_sign(void *element, pf_flags *flags)
{
	if (flags->index_s < 2 && (int)element >= 0)
		write(1, "+", 1);
	if (flags->index_s == 2 && (long int)element >= 0)
		write(1, "+", 1);
}

void	charac_sp(void *element, pf_flags *flags)
{
	if (flags->index_s < 2 && (int)element >= 0 && !(flags->check_char & 0x08))
	{
		write(1, " ", 1);
		if (flags->width > 0)
			flags->width--;
	}
	if (flags->index_s == 2 && (long int)element >= 0 && 
	!(flags->check_char & 0x08))
	{
		write(1, " ", 1);
		if (flags->width > 0)
			flags->width--;
	}
}

void	charac_sharp(void *element, pf_flags *flags)
{
	if (flags->index_s == 3 && (unsigned int)element > 0)
		write(1, "0", 1);
	if (flags->index_s == 4 && (unsigned long int)element > 0)
		write(1, "0", 1);
	if (flags->index_s == 7 && (unsigned int)element > 0)
		write(1, "0x", 2);
	if (flags->index_s == 8 && (unsigned int)element > 0)
		write(1, "0X", 2);
}

void	charac_zero(void *element, pf_flags *flags)
{
		if (flags->check_flags & 0x04 && flags->index_s < 10)
			return;
		if (flags->check_char & 0x04)
			return;
		flags->w = '0';
}
