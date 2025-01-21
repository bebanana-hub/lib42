/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:56:52 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/21 18:45:02 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n);
static int	ft_nbrsize(int n);

static int	ft_nbrsize(int n)
{
	int	sum;

	sum = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		sum++;
	}
	while (n > 0)
	{
		sum++;
		n /= 10;
	}
	return (sum);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		isn;
	int		i;

	i = ft_nbrsize(n);
	isn = (n < 0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = (char *)malloc(i + 1);
	if (!result)
		return (NULL);
	result[i] = '\0';
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	i--;
	while (i >= isn)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (result);
}

// int main()
// {
// 	int nb = 150;
// 	char *result = ft_itoa(nb);
// 	printf("%s",result);
// 	free(result);
// 	return (0);
// }