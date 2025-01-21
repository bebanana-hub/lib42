/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:13:29 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/17 15:50:57 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// int main() 
// {
// 	char *src = "prout";
// 	printf("1 :%s\n", ft_strdup(src));
// 	printf("2 :%s", strdup(src));
// 	return(0);
// }
