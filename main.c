/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:36:11 by tigre             #+#    #+#             */
/*   Updated: 2018/11/12 16:31:41 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"

void test(void)
{
	ft_putchar_one('a');
}

int		main()
{
	int a;
	char *s = NULL;

	a = 0;
	printf("%----14p et hello %p|", &a, &test, NULL);
	printf("\n==============\n");
	ft_printf("%----14p et hello %p|", &a, &test, NULL);
}
