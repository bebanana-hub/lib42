/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:54:34 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/21 19:09:34 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*sp;

	sp = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sp[i] == (unsigned char)c)
			return ((void *)&sp[i]);
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	const char *a = "bonjour a tous";
// 	int b = 'a';
// 	printf("%s\n", (char *)ft_memchr(a,b,9));
// 	printf("%s", (char *)memchr(a,b,9));
// 	return (0);
// }