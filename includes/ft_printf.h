/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 18:46:19 by tigre             #+#    #+#             */
/*   Updated: 2018/10/27 06:16:34 by tigre            ###   ########.fr       */
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
	//	void			(*fct)(char);
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
int					ft_parse_flags(pf_flags **pf_list, const char *format);
int					ft_check_specifier(pf_flags **pf_list, char *str);
void				ft_check_modifier(pf_flags **pf_list, char *str);
void				ft_check_precision(pf_flags **pf_list, char *str);
void				ft_check_width(pf_flags **pf_list, char *str);
void				ft_check_characters(pf_flags **pf_list, char *str);

# endif
