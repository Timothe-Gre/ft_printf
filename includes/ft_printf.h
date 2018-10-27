/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 18:46:19 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 07:37:08 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "../libft/libft.h"

typedef	struct		s_flags
{
	char			check_flags;
	unsigned char	index_s;
	unsigned char	index_m;
	unsigned int	precision;
	unsigned int	width;
	char			check_char;;
}					pf_flags;

typedef	struct		s_elem
{
	intmax_t		elem;
	uintmax_t		u_elem;
}					t_elem;

typedef struct		s_specifier
{
	char			flag_s;
	void			(*fct)(va_list);
}					t_specifier;

typedef struct		s_modifier
{
	char			flag_m;
	//	void			(*fct)(char);
}					t_modifier;

typedef struct		s_character
{
	char			flag_c;
	//	void			(*fct)(char);
}					t_character;

int					ft_printf(const char *format, ...);
void				print_d_i(va_list ap);
int					ft_print(pf_flags flags, va_list ap);

int					ft_parse_flags(const char *format, va_list ap, size_t *ret);
void				ft_check_characters(pf_flags *flags, char *str);
void				ft_check_modifier(pf_flags *flags, char *str);
void				ft_check_precision(pf_flags *flags, char *str);
int					ft_check_specifier(pf_flags *flags, char *str);
void				ft_check_width(pf_flags *flags, char *str);










# endif
