/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/17 22:05:40 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
#include <wchar.h>

int		main()
{
	// setlocale(LC_ALL, "");
	wchar_t	s[4];

	s[0] = 'S';
	s[1] = 256;
	s[2] = 'u';
	s[3] = '\0';
	printf("%.0p, %.p\n", 0, 0);
	ft_printf("%.0p, %.p", 0, 0);


	return (0);
}
