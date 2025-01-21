/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:39:55 by vgalloni          #+#    #+#             */
/*   Updated: 2024/11/27 14:39:58 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_spputhex(unsigned long num, char *prefix)
{
	char	*hex;
	char	hex_str[17];
	int		i;
	int		sum;

	sum = 0;
	i = 15;
	hex = "0123456789abcdef";
	hex_str[16] = '\0';
	if (num == 0)
	{
		sum += ft_spputstr(prefix);
		sum += ft_spputstr("0");
		return (sum);
	}
	while (num > 0)
	{
		hex_str[i] = hex[num % 16];
		num /= 16;
		i--;
	}
	sum += ft_spputstr(prefix);
	sum += ft_spputstr(&hex_str[i + 1]);
	return (sum);
}

int	ft_spputhexmaj(unsigned long num)
{
	char	*hex;
	char	hex_str[17];
	int		i;
	int		sum;

	sum = 0;
	i = 15;
	hex = "0123456789ABCDEF";
	hex_str[16] = '\0';
	if (num == 0)
	{
		sum += ft_spputstr("0");
		return (sum);
	}
	while (num > 0)
	{
		hex_str[i] = hex[num % 16];
		num /= 16;
		i--;
	}
	sum += ft_spputstr(&hex_str[i + 1]);
	return (sum);
}
