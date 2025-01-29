/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:12:40 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/29 14:40:41 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "lib42.h"

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	int					i;
	const unsigned char	*s1p;
	const unsigned char	*s2p;

	if (n < 0)
		return (0);
	i = 0;
	s1p = s1;
	s2p = s2;
	while (i < n)
	{
		if (s1p[i] != s2p[i])
			return (s1p[i] - s2p[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     const char *a = "ou";
//     const char *b = "oi";
//     printf("%d\n", ft_memcmp(a,b, 3));
//     printf("%d", memcmp(a,b, 3));
//     return(0);
// }