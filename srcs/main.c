/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 00:51:41 by tigre             #+#    #+#             */
/*   Updated: 2018/10/30 17:39:50 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;

	// setlocale(LC_CTYPE, "");
	// wchar_t *star = L"初めまして。";
//	long	a = 123123;

	int	test0 = 123;
	int test1 = 32767;                               	 	//short
	int test2 = 65535;										//u short
	int test3 = 2147483647;									//int
	int test4 = 4294967295;									//u int
	int test5 = 9223372036854775807;						// long long
	int test6 = 18446744073709551615;						// u long long

	// printf("%maman %S\n", star);
	// ft_printf("%maman %S\n", star);

	//			LL
	printf("LL:\n");
	printf(" rdm : %llx  rdm + 1 : %llx\n", test0, test0 + 1);
	printf(" max : %llx  max + 1 : %llx\n", test1, test1 + 1);
	printf(" max : %llx  max + 1 : %llx\n", test2, test2 + 1);
	printf(" max : %llx  max + 1 : %llx\n", test3, test3 + 1);
	printf(" max : %llx  max + 1 : %llx\n", test4, test4 + 1);
	printf(" max : %llx  max + 1 : %llx\n", test5, test5 + 1);
	printf(" max : %llx  max + 1 : %llx\n", test6, test6 + 1);
	printf("\n");
	ft_printf(" rdm : %llx  rdm + 1 : %llx\n", test0, test0 + 1);
	ft_printf(" max : %llx  max + 1 : %llx\n", test1, test1 + 1);
	ft_printf(" max : %llx  max + 1 : %llx\n", test2, test2 + 1);
	ft_printf(" max : %llx  max + 1 : %llx\n", test3, test3 + 1);
	ft_printf(" max : %llx  max + 1 : %llx\n", test4, test4 + 1);
	ft_printf(" max : %llx  max + 1 : %llx\n", test5, test5 + 1);
	ft_printf(" max : %llx  max + 1 : %llx\n", test6, test6 + 1);
	printf("\n");
	
	//			L
	printf("L:\n");
	printf(" rdm : %lx  rdm + 1 : %lx\n", test0, test0 + 1);
	printf(" max : %lx  max + 1 : %lx\n", test1, test1 + 1);
	printf(" max : %lx  max + 1 : %lx\n", test2, test2 + 1);
	printf(" max : %lx  max + 1 : %lx\n", test3, test3 + 1);
	printf(" max : %lx  max + 1 : %lx\n", test4, test4 + 1);
	printf(" max : %lx  max + 1 : %lx\n", test5, test5 + 1);
	printf(" max : %lx  max + 1 : %lx\n", test6, test6 + 1);
	printf("\n");
	ft_printf(" rdm : %lx  rdm + 1 : %lx\n", test0, test0 + 1);
	ft_printf(" max : %lx  max + 1 : %lx\n", test1, test1 + 1);
	ft_printf(" max : %lx  max + 1 : %lx\n", test2, test2 + 1);
	ft_printf(" max : %lx  max + 1 : %lx\n", test3, test3 + 1);
	ft_printf(" max : %lx  max + 1 : %lx\n", test4, test4 + 1);
	ft_printf(" max : %lx  max + 1 : %lx\n", test5, test5 + 1);
	ft_printf(" max : %lx  max + 1 : %lx\n", test6, test6 + 1);
	printf("\n");

	//			Z
	printf("Z:\n");
	printf(" rdm : %zx  rdm + 1 : %zx\n", test0, test0 + 1);
	printf(" max : %zx  max + 1 : %zx\n", test1, test1 + 1);
	printf(" max : %zx  max + 1 : %zx\n", test2, test2 + 1);
	printf(" max : %zx  max + 1 : %zx\n", test3, test3 + 1);
	printf(" max : %zx  max + 1 : %zx\n", test4, test4 + 1);
	printf(" max : %zx  max + 1 : %zx\n", test5, test5 + 1);
	printf(" max : %zx  max + 1 : %zx\n", test6, test6 + 1);
	printf("\n");
	ft_printf(" rdm : %zx  rdm + 1 : %zx\n", test0, test0 + 1);
	ft_printf(" max : %zx  max + 1 : %zx\n", test1, test1 + 1);
	ft_printf(" max : %zx  max + 1 : %zx\n", test2, test2 + 1);
	ft_printf(" max : %zx  max + 1 : %zx\n", test3, test3 + 1);
	ft_printf(" max : %zx  max + 1 : %zx\n", test4, test4 + 1);
	ft_printf(" max : %zx  max + 1 : %zx\n", test5, test5 + 1);
	ft_printf(" max : %zx  max + 1 : %zx\n", test6, test6 + 1);
	printf("\n");

	//			J
	printf("J:\n");
	printf(" rdm : %jx  rdm + 1 : %jx\n", test0, test0 + 1);
	printf(" max : %jx  max + 1 : %jx\n", test1, test1 + 1);
	printf(" max : %jx  max + 1 : %jx\n", test2, test2 + 1);
	printf(" max : %jx  max + 1 : %jx\n", test3, test3 + 1);
	printf(" max : %jx  max + 1 : %jx\n", test4, test4 + 1);
	printf(" max : %jx  max + 1 : %jx\n", test5, test5 + 1);
	printf(" max : %jx  max + 1 : %jx\n", test6, test6 + 1);
	printf("\n");
	ft_printf(" rdm : %jx  rdm + 1 : %jx\n", test0, test0 + 1);
	ft_printf(" max : %jx  max + 1 : %jx\n", test1, test1 + 1);
	ft_printf(" max : %jx  max + 1 : %jx\n", test2, test2 + 1);
	ft_printf(" max : %jx  max + 1 : %jx\n", test3, test3 + 1);
	ft_printf(" max : %jx  max + 1 : %jx\n", test4, test4 + 1);
	ft_printf(" max : %jx  max + 1 : %jx\n", test5, test5 + 1);
	ft_printf(" max : %jx  max + 1 : %jx\n", test6, test6 + 1);
	printf("\n");

	//			H
	printf("H:\n");
	printf(" rdm : %hx  rdm + 1 : %hx\n", test0, test0 + 1);
	printf(" max : %hx  max + 1 : %hx\n", test1, test1 + 1);
	printf(" max : %hx  max + 1 : %hx\n", test2, test2 + 1);
	printf(" max : %hx  max + 1 : %hx\n", test3, test3 + 1);
	printf(" max : %hx  max + 1 : %hx\n", test4, test4 + 1);
	printf(" max : %hx  max + 1 : %hx\n", test5, test5 + 1);
	printf(" max : %hx  max + 1 : %hx\n", test6, test6 + 1);
	printf("\n");
	ft_printf(" rdm : %hx  rdm + 1 : %hx\n", test0, test0 + 1);
	ft_printf(" max : %hx  max + 1 : %hx\n", test1, test1 + 1);
	ft_printf(" max : %hx  max + 1 : %hx\n", test2, test2 + 1);
	ft_printf(" max : %hx  max + 1 : %hx\n", test3, test3 + 1);
	ft_printf(" max : %hx  max + 1 : %hx\n", test4, test4 + 1);
	ft_printf(" max : %hx  max + 1 : %hx\n", test5, test5 + 1);
	ft_printf(" max : %hx  max + 1 : %hx\n", test6, test6 + 1);
	printf("\n");
	
	//			HH
	printf("HH:\n");
	printf(" rdm : %hhx  rdm + 1 : %hhx\n", test0, test0 + 1);
	printf(" max : %hhx  max + 1 : %hhx\n", test1, test1 + 1);
	printf(" max : %hhx  max + 1 : %hhx\n", test2, test2 + 1);
	printf(" max : %hhx  max + 1 : %hhx\n", test3, test3 + 1);
	printf(" max : %hhx  max + 1 : %hhx\n", test4, test4 + 1);
	printf(" max : %hhx  max + 1 : %hhx\n", test5, test5 + 1);
	printf(" max : %hhx  max + 1 : %hhx\n", test6, test6 + 1);
	printf("\n");
	ft_printf(" rdm : %hhx  rdm + 1 : %hhx\n", test0, test0 + 1);
	ft_printf(" max : %hhx  max + 1 : %hhx\n", test1, test1 + 1);
	ft_printf(" max : %hhx  max + 1 : %hhx\n", test2, test2 + 1);
	ft_printf(" max : %hhx  max + 1 : %hhx\n", test3, test3 + 1);
	ft_printf(" max : %hhx  max + 1 : %hhx\n", test4, test4 + 1);
	ft_printf(" max : %hhx  max + 1 : %hhx\n", test5, test5 + 1);
	ft_printf(" max : %hhx  max + 1 : %hhx\n", test6, test6 + 1);
	
	
	return (0);
}
