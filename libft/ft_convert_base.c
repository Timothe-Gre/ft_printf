/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:16:10 by tigre             #+#    #+#             */
/*   Updated: 2018/10/24 10:08:18 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_input(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	check;

	if (!nbr || !base_from || !base_to)
		return (0);
	if (*nbr == '-' || *nbr == '+')
		nbr++;
	while (*nbr)
	{
		i = 0;
		check = 0;
		while (base_from[i])
		{
			if (base_from[i] == *nbr)
				check = 1;
			i++;
		}
		if (check == 0)
			return (0);
		nbr++;
	}
	return (1);
}

int		ft_place_or_size(char *base, char nb)
{
	int	i;

	i = 0;
	if (nb)
	{
		while (base[i] != nb)
			i++;
		return (i);
	}
	else
	{
		while (base[i])
			i++;
		return (i);
	}
}

void	itoa_base(int nb, char *base, char *ret, int i)
{
	int	size_b;

	size_b = ft_place_or_size(base, 0);
	if (nb < 0)
	{
		ret[0] = '-';
		nb = -nb;
		i++;
	}
	ret[i] = base[nb % size_b];
	i++;
	ret[i] = '\0';
	if (nb >= size_b)
		itoa_base(nb / size_b, base, ret, i);
}

int		ft_atoi_base(char *nbr, char *base)
{
	long int	ret;
	int			size_b;
	int			signe;

	ret = 0;
	size_b = 0;
	signe = 1;
	if (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			signe = -1;
		nbr++;
	}
	while (base[size_b])
		size_b++;
	while (*nbr)
	{
		ret = ret * size_b + ft_place_or_size(base, *nbr);
		nbr++;
	}
	return (ret * signe);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*ret;
	int		i;
	int		j;

	if (!check_input(nbr, base_from, base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	if (!(ret = (char *)malloc(sizeof(char) * 34)))
		return (NULL);
	itoa_base(nb, base_to, ret, 0);
	i = ft_place_or_size(ret, 0);
	j = -1;
	if (ret[0] == '-')
		j++;
	while (++j < i - 1)
	{
		nb = ret[j];
		ret[j] = ret[i - 1];
		ret[i - 1] = nb;
		i--;
	}
	return (ret);
}
