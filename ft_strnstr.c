/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:28:19 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/17 15:50:46 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == find[j] && i + j < len)
		{
			if (find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *a = "prenez un chewing-gum emile";
// 	const char *b = "gum";
// 	printf("%s", ft_strnstr(a,b,21));
// 	return (0);
// }