/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 14:23:36 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/30 16:19:48 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLAG_H
# define FT_FLAG_H


static t_specifier	specifier[] =
{
	{'d', &print_d_i},
	{'D', &print_D},
	{'i', &print_d_i},
	{'o', &print_o},
	{'O', &print_O},
	{'u', &print_u},
	{'U', &print_U},
	{'x', &print_x},
	{'X', &print_X},
	{'c', &print_c},
	{'C', &print_C},
	{'s', &print_s},
	{'S', &print_S},
	{'p', &print_p},
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
	{'\0'}
};

static t_character	character[] =
{
	{'#'},
	{'2'},
	{'3'},
	{'4'},
	{'\0'}
};

#endif
