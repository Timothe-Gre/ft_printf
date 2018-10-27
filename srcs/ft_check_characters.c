/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_characters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:43:13 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 07:26:21 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

int		index_byte(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 0)
		return((index_byte(nb - 1)) * 2);
	else
		return (0);
}

void	ft_check_characters(pf_flags *flags, char *str)
{
	int		i;

	i = 0;
	flags->check_char = 0;
	while (character[i].flag_c)
	{
		if (character[i].flag_c == *str)
		{
			flags->check_char |= index_byte(i);
			i = 0;
			str++;
			flags->check_flags |= 0x10;
		}
		i++;
	}
}
