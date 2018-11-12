/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_long.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:20:00 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/12 16:49:46 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

static size_t	ft_len_number_b(unsigned long n, unsigned int b, size_t len)
{
	while (n >= b)
	{
		len++;
		n = n / b;
	}
	return (len);
}

void	print_p(void *element, pf_flags flags)
{
	long int tmp;
	size_t l;

	l = ft_len_number_b((unsigned long)element, 16, 1);
	tmp = 0;
	if (flags.check_flags & 0x04 && flags.precision > l)
		tmp = flags.precision - l + 2;
	if (flags.check_flags & 0x08 && flags.width > l && !(flags.check_char & 4))
	{
		tmp = (long int)flags.width - tmp - l -2;
		while(tmp-- > 0)
			ft_putchar_count(&flags.w, 1);
	}
	ft_putchar_count("0x", 2);
	if (flags.check_flags & 0x04 && flags.precision > (l))
		while (flags.precision-- > l)
			ft_putchar_count("0", 1);
	l = 1;
	ft_putlnbr_base((unsigned long)element, 16, 0, &l);
	if (flags.check_flags & 0x08 && flags.width > l && (flags.check_char & 04))
	{
		tmp = (long int)flags.width - tmp - l - 2;
		while(tmp-- > 0)
			ft_putchar_count(&flags.w, 1);
	}
}

void	print_U(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (ft_write_p_u((unsigned long)element, flags, 10))
		ft_putlnbr_base((unsigned long)element, 10, 0, &len);
	if (flags.check_char & 0x04)
		ft_back_w((unsigned long)element, flags, len);
}

void	print_O(void *element, pf_flags flags)
{
	size_t len;

	len = 1;
	if (flags.check_char & 0x02 && (unsigned int)element == 0 &&
	flags.precision == 0)
		ft_putchar_one('0');
	else if (ft_write_p_u((unsigned long)element, flags, 8))
		ft_putlnbr_base((unsigned long)element, 8, 0, &len);
	if (flags.check_char & 0x04)
		ft_back_w((unsigned long)element, flags, len);
}
