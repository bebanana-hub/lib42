/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:39:47 by vgalloni          #+#    #+#             */
/*   Updated: 2024/11/27 14:39:49 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_spprintid(va_list args);
int	ft_spprintu(va_list args);

int	ft_spprintid(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, int);
	return (ft_spputnbr(nb));
}

int	ft_spprintu(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	return (ft_spputnbru(nb));
}
