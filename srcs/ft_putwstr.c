/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:30:21 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/15 19:16:12 by ghtouman         ###   ########.fr       */
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
				ft_putchar_one(str[i]);
			else
				ft_putwchar(str[i]);
		}
 	}
}


// void	print_s(void *element, pf_flags flags)
// {
// 	char *str;
//
// 	str = (char*)element;
//
// 	ft_print_width_s(flags, ft_strlen(str));
// 	if ((flags.check_flags & 0x04) && flags.precision == 0)
// 		return ;
// 	if (flags.precision > 0)
// 	{
// 		while (flags.precision > 0)
// 		{
// 			ft_putchar(*str++);
// 			flags.precision--;
// 		}
// 		return ;
// 	}
// 	ft_putstr(str);
// }
