/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:22:02 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/29 14:47:45 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int n, unsigned int b, char maj)
{
	if (n >= b)
		ft_putnbr_base(n / b, b, maj);
	if (n % b < 10)
		ft_putchar(n % b + '0');
	else if (maj == 1)
		ft_putchar(n % b + 'A' - 10);
	else
		ft_putchar(n % b + 'a' - 10);
}

void	ft_putlnbr_base(unsigned long n, unsigned int b, char maj)
{
	if (n >= b)
		ft_putlnbr_base(n / b, b, maj);
	if (n % b < 10)
		ft_putchar(n % b + '0');
	else if (maj == 1)
		ft_putchar(n % b + 'A' - 10);
	else
		ft_putchar(n % b + 'a' - 10);
}
