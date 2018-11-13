/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/13 21:52:56 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
#include <wchar.h>


int		main()
{
	//setlocale(LC_ALL, "");
	//printf("%10l  d|", 191);
	// printf("%08i", -71);
	//printf("\n======\n");
	 ft_printf("%d%d%d", 15, 12, 4);


			// printf("c'est bon = %C test %d pas bon = %C", 3250, 12, 0x11ffff);
	// ft_printf("c'est bon = %C  pas bon = %C", 3250, 0x11ffff);
	return (0);
}
