/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:19:37 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/29 18:17:28 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_c(void *element)
{
	ft_putchar((char)element);
}

void	print_C(void *element)
{
	wchar_t gheram;
	gheram = (wchar_t)element;
	if ((gheram > 255 && MB_CUR_MAX != 4) || gheram < 0x0 ||
		(gheram >= 0xd800 && gheram <= 0xdfff) || (gheram > 0x10ffff))
		return ;
	else if (gheram > 0x7f && gheram <= 0xff && MB_CUR_MAX != 4)
		ft_putchar(gheram);
	else
		ft_putwchar(gheram);
}

void	print_s(void *element)
{
	ft_putstr((char *)element);
}

void	print_S(void *element)
{
	ft_putwstr((wchar_t*)element);
}
