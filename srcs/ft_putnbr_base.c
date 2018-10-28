/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_maj.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:22:02 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/27 17:44:18 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "../libft/libft.h"
size_t	size_number(int	nb, size_t len)
{
	if (nb == 0 && len == 0)
		return (1);
	else if (nb == 0)
		return (len);
	return (size_number(nb / 10, len + 1));
}

void	ft_putnbr_base(unsigned int nb, unsigned int base)
{
	if (nb >= base)
	{
		ft_putnbr_base(nb / base, base);
		if (nb % base < 10)
			ft_putchar(nb % base + '0');
		else
			ft_putchar(nb % base + 'A');
	}
	if (nb == 0)
	{
		if (nb % base < 10)
			ft_putchar(nb % base + '0');
		else
			ft_putchar(nb % base + 'A');
		return ;
	}
}

int		main()
{
	printf("%o\n", 2000);
	ft_putnbr_base(2000, 8);
	return (0);
}