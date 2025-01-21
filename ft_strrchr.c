/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:23:18 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/21 18:30:36 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	char *a = "abcdefghijk";
// 	int sch = 'c';
// 	printf("%s", ft_strrchr(a, sch));
// 	return(0);
// }