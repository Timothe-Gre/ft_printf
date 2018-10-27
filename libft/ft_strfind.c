/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:03:14 by ghtouman          #+#    #+#             */
/*   Updated: 2018/10/26 11:55:20 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strfind(const char *str, const char *to_find)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0')
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i] && to_find[j] && to_find[j] == str[i])
		{
			j++;
			i++;
		}
		if (j == ft_strlen(to_find))
			return (1);
		i++;
	}
	return (0);
}
