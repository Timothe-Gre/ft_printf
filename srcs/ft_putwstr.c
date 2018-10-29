/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 11:18:55 by tigre             #+#    #+#             */
/*   Updated: 2018/10/29 18:23:10 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 void	ft_putwstr(wchar_t *str)
 {
 	int i;

 	i = -1;
	if (str)
	{
 		while (str[++i])
		{
			if (str[i] > 0x7f && str[i] <= 0xff && MB_CUR_MAX != 4)
				ft_putchar(str[i]);
			else
				ft_putwchar(str[i]);
		}
 	}
}
