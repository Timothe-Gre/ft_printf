/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 00:51:41 by tigre             #+#    #+#             */
/*   Updated: 2018/10/31 12:33:35 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;

	unsigned short test = 30560;



	// setlocale(LC_CTYPE, "");
	// wchar_t *star = L"初めまして。";
	//	long	a = 123123;
	//
	int	test0 = -123;
	int test1 = 32767;                               	 	//short
	int test2 = 65535;										//u short
	int test3 = 2147483647;									//int
	int test4 = 4294967295;									//u int
	int test5 = 9223372036854775807;						// long long
	int test6 = 18446744073709551615;						// u long long
	//
	// // printf("%maman %S\n", star);
	// // ft_printf("%maman %S\n", star);
	//
	ft_printf("%.30hd\n", test0);
	   printf("%.30hd\n", test0);
	printf("\n\n");
	ft_printf("%.30hd\n", test1);
	   printf("%.30hd\n", test1);
	printf("\n\n");
	ft_printf("%.30hd\n", test2);
	   printf("%.30hd\n", test2);
	printf("\n\n");
	ft_printf("%.30hd\n", test3);
	   printf("%.30hd\n", test3);
	printf("\n\n");
	ft_printf("%.30hd\n", test4);
	   printf("%.30hd\n", test4);
	printf("\n\n");
	ft_printf("%.30hd\n", test5);
	   printf("%.30hd\n", test5);
	printf("\n\n");
	ft_printf("%.30hd\n", test6);
	   printf("%.30hd\n", test6);
	// //			LL
	// printf("LL:\n");
	// printf(" rdm : %llu  rdm + 1 : %llu\n", test0, test0 + 1);
	// printf(" mau : %llu  mau + 1 : %llu\n", test1, test1 + 1);
	// printf(" mau : %llu  mau + 1 : %llu\n", test2, test2 + 1);
	// printf(" mau : %llu  mau + 1 : %llu\n", test3, test3 + 1);
	// printf(" mau : %llu  mau + 1 : %llu\n", test4, test4 + 1);
	// printf(" mau : %llu  mau + 1 : %llu\n", test5, test5 + 1);
	// printf(" mau : %llu  mau + 1 : %llu\n", test6, test6 + 1);
	// printf("\n");
	// ft_printf(" rdm : %llu  rdm + 1 : %llu\n", test0, test0 + 1);
	// ft_printf(" mau : %llu  mau + 1 : %llu\n", test1, test1 + 1);
	// ft_printf(" mau : %llu  mau + 1 : %llu\n", test2, test2 + 1);
	// ft_printf(" mau : %llu  mau + 1 : %llu\n", test3, test3 + 1);
	// ft_printf(" mau : %llu  mau + 1 : %llu\n", test4, test4 + 1);
	// ft_printf(" mau : %llu  mau + 1 : %llu\n", test5, test5 + 1);
	// ft_printf(" mau : %llu  mau + 1 : %llu\n", test6, test6 + 1);
	// printf("\n");
	//
	// //			L
	// printf("L:\n");
	// printf(" rdm : %lu  rdm + 1 : %lu\n", test0, test0 + 1);
	// printf(" mau : %lu  mau + 1 : %lu\n", test1, test1 + 1);
	// printf(" mau : %lu  mau + 1 : %lu\n", test2, test2 + 1);
	// printf(" mau : %lu  mau + 1 : %lu\n", test3, test3 + 1);
	// printf(" mau : %lu  mau + 1 : %lu\n", test4, test4 + 1);
	// printf(" mau : %lu  mau + 1 : %lu\n", test5, test5 + 1);
	// printf(" mau : %lu  mau + 1 : %lu\n", test6, test6 + 1);
	// printf("\n");
	// ft_printf(" rdm : %lu  rdm + 1 : %lu\n", test0, test0 + 1);
	// ft_printf(" mau : %lu  mau + 1 : %lu\n", test1, test1 + 1);
	// ft_printf(" mau : %lu  mau + 1 : %lu\n", test2, test2 + 1);
	// ft_printf(" mau : %lu  mau + 1 : %lu\n", test3, test3 + 1);
	// ft_printf(" mau : %lu  mau + 1 : %lu\n", test4, test4 + 1);
	// ft_printf(" mau : %lu  mau + 1 : %lu\n", test5, test5 + 1);
	// ft_printf(" mau : %lu  mau + 1 : %lu\n", test6, test6 + 1);
	// printf("\n");
	//
	// //			Z
	// printf("Z:\n");
	// printf(" rdm : %zu  rdm + 1 : %zu\n", test0, test0 + 1);
	// printf(" mau : %zu  mau + 1 : %zu\n", test1, test1 + 1);
	// printf(" mau : %zu  mau + 1 : %zu\n", test2, test2 + 1);
	// printf(" mau : %zu  mau + 1 : %zu\n", test3, test3 + 1);
	// printf(" mau : %zu  mau + 1 : %zu\n", test4, test4 + 1);
	// printf(" mau : %zu  mau + 1 : %zu\n", test5, test5 + 1);
	// printf(" mau : %zu  mau + 1 : %zu\n", test6, test6 + 1);
	// printf("\n");
	// ft_printf(" rdm : %zu  rdm + 1 : %zu\n", test0, test0 + 1);
	// ft_printf(" mau : %zu  mau + 1 : %zu\n", test1, test1 + 1);
	// ft_printf(" mau : %zu  mau + 1 : %zu\n", test2, test2 + 1);
	// ft_printf(" mau : %zu  mau + 1 : %zu\n", test3, test3 + 1);
	// ft_printf(" mau : %zu  mau + 1 : %zu\n", test4, test4 + 1);
	// ft_printf(" mau : %zu  mau + 1 : %zu\n", test5, test5 + 1);
	// ft_printf(" mau : %zu  mau + 1 : %zu\n", test6, test6 + 1);
	// printf("\n");
	//
	// //			J
	// printf("J:\n");
	// printf(" rdm : %ju  rdm + 1 : %ju\n", test0, test0 + 1);
	// printf(" mau : %ju  mau + 1 : %ju\n", test1, test1 + 1);
	// printf(" mau : %ju  mau + 1 : %ju\n", test2, test2 + 1);
	// printf(" mau : %ju  mau + 1 : %ju\n", test3, test3 + 1);
	// printf(" mau : %ju  mau + 1 : %ju\n", test4, test4 + 1);
	// printf(" mau : %ju  mau + 1 : %ju\n", test5, test5 + 1);
	// printf(" mau : %ju  mau + 1 : %ju\n", test6, test6 + 1);
	// printf("\n");
	// ft_printf(" rdm : %ju  rdm + 1 : %ju\n", test0, test0 + 1);
	// ft_printf(" mau : %ju  mau + 1 : %ju\n", test1, test1 + 1);
	// ft_printf(" mau : %ju  mau + 1 : %ju\n", test2, test2 + 1);
	// ft_printf(" mau : %ju  mau + 1 : %ju\n", test3, test3 + 1);
	// ft_printf(" mau : %ju  mau + 1 : %ju\n", test4, test4 + 1);
	// ft_printf(" mau : %ju  mau + 1 : %ju\n", test5, test5 + 1);
	// ft_printf(" mau : %ju  mau + 1 : %ju\n", test6, test6 + 1);
	// printf("\n");
	//
	// //			H
	// printf("H:\n");
	// printf(" rdm : %hu  rdm + 1 : %hu\n", test0, test0 + 1);
	// printf(" mau : %hu  mau + 1 : %hu\n", test1, test1 + 1);
	// printf(" mau : %hu  mau + 1 : %hu\n", test2, test2 + 1);
	// printf(" mau : %hu  mau + 1 : %hu\n", test3, test3 + 1);
	// printf(" mau : %hu  mau + 1 : %hu\n", test4, test4 + 1);
	// printf(" mau : %hu  mau + 1 : %hu\n", test5, test5 + 1);
	// printf(" mau : %hu  mau + 1 : %hu\n", test6, test6 + 1);
	// printf("\n");
	// ft_printf(" rdm : %hu  rdm + 1 : %hu\n", test0, test0 + 1);
	// ft_printf(" mau : %hu  mau + 1 : %hu\n", test1, test1 + 1);
	// ft_printf(" mau : %hu  mau + 1 : %hu\n", test2, test2 + 1);
	// ft_printf(" mau : %hu  mau + 1 : %hu\n", test3, test3 + 1);
	// ft_printf(" mau : %hu  mau + 1 : %hu\n", test4, test4 + 1);
	// ft_printf(" mau : %hu  mau + 1 : %hu\n", test5, test5 + 1);
	// ft_printf(" mau : %hu  mau + 1 : %hu\n", test6, test6 + 1);
	// printf("\n");
	//
	// //			HH
	// printf("HH:\n");
	// printf(" rdm : %hhu  rdm + 1 : %hhu\n", test0, test0 + 1);
	// printf(" mau : %hhu  mau + 1 : %hhu\n", test1, test1 + 1);
	// printf(" mau : %hhu  mau + 1 : %hhu\n", test2, test2 + 1);
	// printf(" mau : %hhu  mau + 1 : %hhu\n", test3, test3 + 1);
	// printf(" mau : %hhu  mau + 1 : %hhu\n", test4, test4 + 1);
	// printf(" mau : %hhu  mau + 1 : %hhu\n", test5, test5 + 1);
	// printf(" mau : %hhu  mau + 1 : %hhu\n", test6, test6 + 1);
	// printf("\n");
	// ft_printf(" rdm : %hhu  rdm + 1 : %hhu\n", test0, test0 + 1);
	// ft_printf(" mau : %hhu  mau + 1 : %hhu\n", test1, test1 + 1);
	// ft_printf(" mau : %hhu  mau + 1 : %hhu\n", test2, test2 + 1);
	// ft_printf(" mau : %hhu  mau + 1 : %hhu\n", test3, test3 + 1);
	// ft_printf(" mau : %hhu  mau + 1 : %hhu\n", test4, test4 + 1);
	// ft_printf(" mau : %hhu  mau + 1 : %hhu\n", test5, test5 + 1);
	// ft_printf(" mau : %hhu  mau + 1 : %hhu\n", test6, test6 + 1);


	return (0);
}
