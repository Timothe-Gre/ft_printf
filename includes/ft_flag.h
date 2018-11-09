/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 14:23:36 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/09 12:15:24 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLAG_H
# define FT_FLAG_H


static t_specifier	specifier[] =
{
	{'d', &print_d_i},
	{'i', &print_d_i},
	{'D', &print_D},
	{'o', &print_o},
	{'O', &print_O},
	{'u', &print_u},
	{'U', &print_U},
	{'x', &print_x},
	{'X', &print_X},
	{'p', &print_p},
	{'c', &print_c},
	{'C', &print_C},
	{'s', &print_s},
	{'S', &print_S},
	{'\0', NULL}
};

static t_modifier	modifier[] =
{
	{'h', &modif_h},
	{'l', &modif_l},
	{'j', &modif_j},
	{'z', &modif_z},
	{'H', &modif_hh},
	{'L', &modif_ll},
	{'\0', NULL}
};

static t_character	character[] =
{
	{'0', &charac_zero},
	{'#', &charac_sharp},
	{'-'},
	{'+', &charac_plus_sign},
	{' ', &charac_sp},
	{'\0'}
};

#endif
