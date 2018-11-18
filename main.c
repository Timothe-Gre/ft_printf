/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/18 05:30:15 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
#include <wchar.h>

int		main()
{
	//setlocale(LC_ALL, "");
	char *N = "%d";
	wchar_t	s[4];

				s[0] = 0x53;
				s[1] = 0x3abc;
				s[2] = 0x81000;
				s[3] = '\0';
	printf("\n%d\n", printf("%S", L"米"));
	printf("\n");
	printf("\n%d\n", ft_printf("%S", L"米"));
}
