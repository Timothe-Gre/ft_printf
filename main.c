/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/28 14:23:07 by ghtouman         ###   ########.fr       */
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
	int a = 0;

	setlocale(LC_ALL, "en_US.UTF-8");
	ret  = printf("{%10R}");
	printf("\n");
	ft_ret = ft_printf("{%10R}");
	printf("\n");
	printf("ret = %d, ft_ret = %d\n", ret, ft_ret);
}
