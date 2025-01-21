/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:54:41 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/23 17:22:13 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	signe;

	nb = 0;
	signe = 1;
	while ((*str == ' ' || (*str >= 9 && *str <= 13)) && *str)
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -signe;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * signe);
}

// int main()
// {
// 	printf("%d\n", ft_atoi("	--12"));
// 	printf("%d\n", atoi("	--12"));
// 	return 0;
// }
