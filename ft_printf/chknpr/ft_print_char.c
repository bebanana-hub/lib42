/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:39:39 by vgalloni          #+#    #+#             */
/*   Updated: 2024/11/27 14:39:41 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_spprintc(va_list args);
int	ft_spprints(va_list args);
int	ft_spprintp(va_list args);
int	ft_spprintxmaj(va_list args);
int	ft_spprintx(va_list args);

int	ft_spprintc(va_list args)
{
	int	c;

	c = va_arg(args, int);
	return (ft_spputchar(c));
}

int	ft_spprints(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	return (ft_spputstr(s));
}

int	ft_spprintp(va_list args)
{
	int	*ptr;

	ptr = va_arg(args, int *);
	if (!ptr)
		return (ft_spputstr("(nil)"));
	return (ft_spputhex((unsigned long)ptr, "0x"));
}

int	ft_spprintxmaj(va_list args)
{
	int unsigned	nb;

	nb = va_arg(args, unsigned int);
	return (ft_spputhexmaj(nb));
}

int	ft_spprintx(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	return (ft_spputhex(nb, ""));
}
