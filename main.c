/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/29 21:13:00 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
#include <wchar.h>

int		main()
{
	int ret;
	int ft_ret;
	double a = -50.255555;
	long double b = 0.2;
	// setlocale(LC_ALL, "en_US.UTF-8");
	// printf("%Lf %++#-020.3d %c %% %keglerg %f",b , 15, 'c', a);
	printf("% f", a);
	printf("\n\n");

	ft_printf("% f", a);
	// ft_printf("%Lf %++#-020.3d %c %% %keglerg %f",b , 15, 'c', a);
	printf("\n");
	// printf("%lf\n", (double*)p);
	// ft_printf("%d\n", 0.0);

	// printf("ret = %d, ft_ret = %d\n", ret, ft_ret);
}
