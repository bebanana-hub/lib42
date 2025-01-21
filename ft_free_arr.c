/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:17:03 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/08 17:08:55 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_arr(void **arr, int rows)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	if (rows > 0)
	{
		while (i < rows)
			free(arr[i++]);
	}
	else
	{
		while (arr[i])
			free(arr[i++]);
	}
	free(arr);
}
