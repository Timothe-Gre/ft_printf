/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_unicode.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:20:32 by ghtouman          #+#    #+#             */
/*   Updated: 2018/11/13 21:50:31 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

static int		ft_unicode_error(wchar_t element)
{
	if (element >= 55296 && element <= 57343)
		return (1);
	if (element > 127 && element <= 2047 && MB_CUR_MAX < 2)
		return (1);
	if (element > 2047 && element <= 65535 && MB_CUR_MAX < 3)
		return (1);
	if (element > 65535 && element <= 1114111 && MB_CUR_MAX < 4)
		return (1);
	if (element > 1114111)
		return (1);
	return (0);
}

static int		ft_str_unicode_error(wchar_t *str)
{
	int			i;

	i = -1;
	while (str[++i])
		if (ft_unicode_error(str[i]) == 1)
			return(1);
	return (0);
}

static int		back(char *format, int i)
{
	int 		back;

	back = 0;
	while (format[i] != '%')
	{
		if (format[i] == 'l' && format[i - 1] != 'l')
			back = 1;
		if (format[i] == 'l' && format[i - 1] == 'l')
		{
			back = 0;
			break ;
		}
		i--;
	}
	return (back);
}

static int		ft_check_if_unicode(char *f, int i, va_list ap)
{
	void		*element;
	int			j;
	int 		s;

	j = 0;
	s = 0;
	while (specifier[j].flag_s)
	{
		if (specifier[j++].flag_s == f[i])
		{
			element = va_arg(ap, void*);
			s = 2;
		}
	}
	if (f[i] == 'C')
		return (ft_unicode_error((wchar_t)element));
	if (f[i] == 'S')
		return (ft_str_unicode_error((wchar_t*)element));
	if (f[i] == 'c')
		if(back(f, i) == 1)
			return (ft_unicode_error((wchar_t)element));
	if (f[i] == 's')
		if(back(f, i) == 1)
			return (ft_str_unicode_error((wchar_t*)element));
	return (s);
}

int				ft_found_unicode(va_list ap, const char *format, int *num_var)
{
	int 		i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (format[i])
			{
				if (ft_check_if_unicode((char*)format, i, ap) == 1)
					return (1);
				if (ft_check_if_unicode((char*)format, i, ap) == 2)
				{
					(*num_var)++;
					break;
				}
				i++;
			}
		}
		i++;
	}
	return (0);
}
