/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:09:41 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/21 18:35:19 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	char a[]= "oui";
// 	char r = 'x';
// 	printf("%s\n", a);
// 	ft_memset(a,r,3);
// 	printf("%s\n", a);
// 	return (0);
// }
