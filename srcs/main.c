/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 00:51:41 by tigre             #+#    #+#             */
/*   Updated: 2018/10/30 16:07:44 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;

	// setlocale(LC_CTYPE, "");
	// wchar_t *star = L"初めまして。";
//	long	a = 123123;

	int test = 92;

	// printf("%maman %S\n", star);
	// ft_printf("%maman %S\n", star);

	printf("modif + D === %hX\n", test);
	ft_printf("D =========== %hX\n", test);

	// ft_printf("%hd", test);

	return (0);
}
