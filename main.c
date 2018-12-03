/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/12/03 15:50:20 by tigre            ###   ########.fr       */
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
	double a = 0.3235486846;
	long double b = 0.2;
	char c;
	setlocale(LC_ALL, "en_US.UTF-8");
	// printf("%Lf %++#-020.3d %c %% %keglerg %f",b , 15, 'c', a);
	// printf("\n\n");
	// ft_printf("%Lf %++#-020.3d %c %% %keglerg %f",b , 15, 'c', a);
	ft_printf("%.20f\n", a);
	 printf("%.20f\n", a);
}
