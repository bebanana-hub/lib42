/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:39:19 by vgalloni          #+#    #+#             */
/*   Updated: 2024/11/27 14:39:24 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_spcheck(const char *format, va_list args);
int	ft_spputstr(char *s);
int	ft_spputnbr(int n);
int	putchar(char c);

int	ft_spcheck(const char *format, va_list args)
{
	int	result;

	result = 0;
	if (*format == 'c')
		result = ft_spprintc(args);
	else if (*format == 'i' || *format == 'd')
		result = ft_spprintid(args);
	else if (*format == 's')
		result = ft_spprints(args);
	else if (*format == 'p')
		result = ft_spprintp(args);
	else if (*format == 'u')
		result = ft_spprintu(args);
	else if (*format == 'x')
		result = ft_spprintx(args);
	else if (*format == 'X')
		result = ft_spprintxmaj(args);
	else if (*format == '%')
	{
		write(1, "%", 1);
		result++;
	}
	else
		return (-1);
	return (result);
}

int	ft_spputchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_spputnbr(int n)
{
	char	c;
	int		sum;

	sum = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		sum++;
	}
	if (n > 9)
		sum += ft_spputnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	sum++;
	return (sum);
}

int	ft_spputstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_spputnbru(unsigned int n)
{
	char	c;
	int		sum;

	sum = 0;
	if (n > 9)
		sum += ft_spputnbru(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	sum++;
	return (sum);
}
