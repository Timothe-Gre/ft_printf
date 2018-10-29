/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 00:51:41 by tigre             #+#    #+#             */
/*   Updated: 2018/10/29 19:06:15 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int		main(int ac, char **av)
{
	(void)ac;
	(void)av;

	setlocale(LC_CTYPE, "");
	wchar_t *star = L"初めまして。";	
//	long	a = 123123;

	printf("%maman %S\n", star);
	ft_printf("%maman %S\n", star);

	return (0);
}
