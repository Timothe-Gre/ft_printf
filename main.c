/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/18 03:18:01 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
#include <wchar.h>

int		main()
{
	//setlocale(LC_ALL, "");
	wchar_t	s[4];

				s[0] = 0x53;
				s[1] = 0x3abc;
				s[2] = 0x81000;
				s[3] = '\0';
	//	printf("%.1ls\n", s);
	//	ft_printf("%.1ls\n", s);
	printf("%d\n",printf("%9.6ls %S", s, L"a"));
	printf("\n");
	printf("%d\n",ft_printf("%9.6ls %S", s, L"a"));
	return (0);
}
