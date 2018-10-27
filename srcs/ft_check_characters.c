/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_characters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:43:13 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 01:46:48 by tigre            ###   ########.fr       */
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

void	ft_check_characters(pf_flags **pf_list, char *str)
{
	int		i;

	i = 0;
	(*pf_list)->check_char = 0;
	while (character[i].flag_c)
	{
		if (character[i].flag_c == *str)
		{	
			(*pf_list)->check_char |= index_byte(i);
			i = 0;
			str++;
			(*pf_list)->check_flags |= 0x10;
			printf("%d\n", (*pf_list)->check_flags);
		}
		i++;
	}
}
