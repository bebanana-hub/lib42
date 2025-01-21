/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:25:14 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/25 16:10:47 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	i = 0;
	if (s < d)
	{
		while (n > 0 && (dest || src))
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n && (dest || src))
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
