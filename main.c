/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/15 18:42:44 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
#include <wchar.h>


int		main()
{
	setlocale(LC_ALL, "");
	printf("%d\n", printf("hreiuhiuerh %C fiofjhiuh\n", 0xd805));
	//	printf("\nici = %d\n", printf("%10d nsjknkds %d  %C|", 10, 15, 0xd805));
//	ft_printf("\nici = %d\n", printf("%10d nsjknkds %d  %C|", 10, 15, 0xd805));
	printf("%d\n", ft_printf("hreiuhiuerh %C fiofjhiuh\n", 0xd805));
	return (0);
}
