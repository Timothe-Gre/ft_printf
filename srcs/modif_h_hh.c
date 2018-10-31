/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_h_hh.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:02:44 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/31 12:41:59 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_write_p_u(uintmax_t element, pf_flags flags, char base)
{
	// et ici les modification de la largeur
	while (flags.precision > ft_len_number(element, 0, base))
	{
		ft_putchar('0');
		flags.precision--;
	}
}

void ft_write_p(intmax_t element, pf_flags flags, char base)
{
	if (element < 0)
	{
		ft_putchar('-');
		flags.precision++;
	}
	while (flags.precision > ft_len_number(element, 0, base))
	{
		ft_putchar('0');
		flags.precision--;
	}
}

void		modif_h(void *element, pf_flags flags)
{
	if ( flags.index_s == 3)
	{
		ft_write_p_u((unsigned short int)element, flags, 8);
		ft_putnbr_base((unsigned short int)element, 8, 0);
	}
	else if (flags.index_s == 5)
	{
		ft_write_p_u((unsigned short int)element, flags, 10);
		ft_putnbr_base((unsigned short int)element, 10, 0);
	}
	else if (flags.index_s == 7)
	{
		ft_write_p_u((unsigned short int)element, flags, 16);
		ft_putnbr_base((unsigned short int)element, 16, 0);
	}
	else if (flags.index_s == 8)
	{
		ft_write_p_u((unsigned short int)element, flags, 16);
		ft_putnbr_base((unsigned short int)element, 16, 1);
	}
	else
	{
		ft_write_p((short int)element, flags, 10);
		ft_putnbr_no_minus((short int)element);
	}
}

// size_t	ft_len_number(intmax_t nb, size_t len, char base)
//


// void ft_write_p(intmax_t element, pf_flags flags)
// {
// 	printf("%d\n", flags.precision);
// }

void		modif_hh(void *element, pf_flags flags)
{
	if ( flags.index_s == 3)
		ft_putnbr_base((unsigned char)element, 8, 0);
	else if (flags.index_s == 5)
		ft_putnbr_base((unsigned char)element, 10, 0);
	else if (flags.index_s == 7)
		ft_putnbr_base((unsigned char)element, 16, 0);
	else if (flags.index_s == 8)
		ft_putnbr_base((unsigned char)element, 16, 1);
	else
		ft_putnbr((char)element);
}
