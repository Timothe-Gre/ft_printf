/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/12 19:19:07 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
#include <wchar.h>


int		main()
{
	setlocale(LC_ALL, "");
	printf("c'est bon = %C test %d pas bon = %C", 3250, 12, 0x11ffff);
	// printf("\n======\n");
	// ft_printf("c'est bon = %C  pas bon = %C", 3250, 0x11ffff);
	return (0);
}
