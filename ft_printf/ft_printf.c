/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:43:35 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/10 17:08:00 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...);
static int	ft_fail(va_list ok);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		temp;

	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			temp = ft_spcheck(++format, args);
			if (temp == -1)
				return (ft_fail(args));
			i += temp;
			format++;
		}
		else
		{
			write (1, &(*format), 1);
			i++;
			format++;
		}
	}
	va_end(args);
	return (i);
}

static int	ft_fail(va_list ok)
{
	va_end(ok);
	return (-1);
}
