/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_occ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:13:01 by vgalloni          #+#    #+#             */
/*   Updated: 2024/11/26 16:32:44 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_occ(char *str, int c)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (str[i])
	{
		if (str[i] == c)
			sum++;
		i++;
	}
	return (sum);
}
