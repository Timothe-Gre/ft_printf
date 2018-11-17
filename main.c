/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/16 15:09:39 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
#include <wchar.h>


int		main()
{
	setlocale(LC_ALL, "");

	ft_printf("%--.4u et %#O%1lcn, -12, 0, 0, 95");
	//printf("\n");
	//printf("%--.4u et %#O%#012O%1lc\\n, -12, 0, 0, 95");
		
	//printf("%hu\\n");
	//ft_printf("%hu\\n");
	
	
	return (0);
}
