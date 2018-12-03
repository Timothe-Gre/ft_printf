/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/12/03 22:55:02 by tigre            ###   ########.fr       */
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
	double a = 0.1242;
	long double b = 0.2;
	char c;
	setlocale(LC_ALL, "en_US.UTF-8");
	// printf("%Lf %++#-020.3d %c %% %keglerg %f",b , 15, 'c', a);
	// printf("\n\n");
	// ft_printf("%Lf %++#-020.3d %c %% %keglerg %f",b , 15, 'c', a);
	ret = printf("{%f}", 1444565444646.6465424242242);
	printf("\n");
	ft_ret = ft_printf("{%f}", 1444565444646.6465424242242);

	printf ("\nret = %d, ft_ret = %d", ret, ft_ret);
}
