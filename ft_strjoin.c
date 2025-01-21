/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:05:40 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/21 19:42:38 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*sum;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup((char *)s2));
	if (!s2)
		return (ft_strdup((char *)s1));
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	sum = (char *)malloc((i + j + 1) * sizeof(char));
	if (sum == NULL)
		return (NULL);
	ft_memcpy(sum, s1, i);
	ft_memcpy(sum + i, s2, j);
	sum[i + j] = '\0';
	return (sum);
}

// int main()
// {
// 	const char *a ="prends cette phrase";
// 	char *b = " et ajoute celle ci";
// 	printf("%s", ft_strjoin(a,b));
// 	return (0);
// }