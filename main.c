/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/29 16:28:27 by ghtouman         ###   ########.fr       */
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
	double a = 50.255555;

	// setlocale(LC_ALL, "en_US.UTF-8");
	printf("ici = %+09.0f|", a);
	printf("\n");

	// ft_printf("%d\n", 0.0);

	// printf("ret = %d, ft_ret = %d\n", ret, ft_ret);
}
