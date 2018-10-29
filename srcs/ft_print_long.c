/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_long.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:20:00 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/29 14:58:48 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_pointer(void *element)
{
	ft_putstr("0x");
	ft_putlnbr_base((unsigned long)element, 16, 0);
}

void	print_U(void *element)
{
	ft_putlnbr_base((unsigned long)element, 10, 0);
}

void	print_O(void *element)
{
	ft_putlnbr_base((unsigned long)element, 8, 0);
}
