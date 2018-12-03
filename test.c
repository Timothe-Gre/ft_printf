/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:31:42 by tigre             #+#    #+#             */
/*   Updated: 2018/12/03 21:49:56 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long	power(long n, int p)
{
	long int		ret;

	ret = 1;
	while (p--)
		ret *= n;

	return (ret);
}

void	ft_putlnbr(long int n)
{
	if (n < -9223372036854775807)
	{	
		(write(1, "9223372036854775808", 19));
		return ;
	}
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_putlnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

void	ft_putfloat(long double f, unsigned int p)
{
	uintmax_t	n;

	if (f < 0)
	{
		ft_putchar('-');
		f = -f;
	}
	n = (uintmax_t)f;
	if (p == 0 && (f - n >= 0.5))
		n++;
	ft_putlnbr(n);
	f -= n;
	if (p)
	{
		ft_putchar('.');
		while (p--)
		{
			f *= 10;
			n = (uintmax_t)f;
			f -= n;
			f >= 0.5 && p == 0 ? n++ : n;
			ft_putchar(n + '0');
		}
	}
}

int		main()
{
	float f  = 1.123;
	void *p;

	int i = 31;
	int n = 2;
	printf("\nf = %f\n", f);
	p = &f;
	printf("binaire de f :\n\n   ");
	while (i > 0)
	{
		printf("%d", ((*(int *)p) >> i--) & 0x01);
		i == 30 ? printf("  ") : i;
		i == 22 ? printf("  ") : i;
	}
	printf("\n\n");
	printf("%f\n", f);
	ft_putfloat(f, 6);
	return (0);
}


