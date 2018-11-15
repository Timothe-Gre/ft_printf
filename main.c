/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/15 21:08:08 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
#include <wchar.h>


int		main()
{
	// wchar_t	*s;
	setlocale(LC_ALL, "");
	// s[0] = 0x53;
	// s[1] = 0x3abc;
	// s[2] = 0x81000;
	// s[3] = '\0';
	// s[0] = 0x53;
	// s[1] = 0xd800;
	// s[2] = 0x81000;
	// s[3] = '\0';
	// s = L"はじめまして。";
	// printf("%.6S", s);
	// printf("\n ============== \n");
	// ft_printf("%.6S\n", s);
	// ft_printf("%03d\n", -1);
	// ft_printf("%0+5d", -42);
	printf("%d\n" ,printf(" %"));

	// ft_printf("%");

	// printf("%d\n", printf("hreiuhiuerh %C fiofjhiuh\n", 0xd805));
	//	printf("\nici = %d\n", printf("%10d nsjknkds %d  %C|", 10, 15, 0xd805));
//	ft_printf("\nici = %d\n", printf("%10d nsjknkds %d  %C|", 10, 15, 0xd805));
	// printf("%d\n", ft_printf("hreiuhiuerh %C fiofjhiuh\n", 0xd805));
	return (0);
}
