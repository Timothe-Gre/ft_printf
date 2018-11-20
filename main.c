/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/20 19:02:10 by tigre            ###   ########.fr       */
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
	
	printf("{%5.S}", 0);
	printf("\n");
	ft_printf("{%5.S}", 0);

	printf("\n\n");
/*	ret = printf("{%30S}", L"我是一只猫。");
	printf("\nret =    %d\n", ret);
	printf("\n");
	ft_ret = printf("{%30S}", L"我是一只猫。");
	printf("\nft_ret = %d\n", ft_ret);*/
}
