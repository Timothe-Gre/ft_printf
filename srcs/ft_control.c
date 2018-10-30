/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 06:14:17 by tigre             #+#    #+#             */
/*   Updated: 2018/10/30 16:00:14 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_flag.h"

int		ft_control(pf_flags flags, va_list ap)
{
	void *element;

	element = va_arg(ap, void*);

	// if (flags.check_flags && 0x10)
	// 	check_combinaison_char(flags);
	// if (flags.check_flags && 0x08)
	// 	check_combinaison_width(flags);
	// if (flags.check_flags && 0x04)
	// 	check_combinaison_precision(flags);
	// if (flags.check_flags && 0x02)
	// 	check_combinaison_modifier(flags);
	if (flags.check_flags && 0x01)
		specifier[flags.index_s].fct_s(element, flags);

	//commentaire pour gheram la petite tete qui risque de tout oublier:
	//chemin de printf dans l'ordre :
	//	gestion des characters
	//	gestion du specifier :
	//		gestion du modifier eventuel
	//		cast pour calcul de la taille d'element
	//		gestion precision et width
	//	affichage
	return (0);
}
