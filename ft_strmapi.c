/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:14:17 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/21 18:46:58 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)malloc(ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	ft_toupper(unsigned int i, char c)
// {
//     (void)i;
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c -= 32;
// 		return (c);
// 	}
// 	return (c);
// }

// int main()
// {
//     char *a = "oui";
//     printf("%s", ft_strmapi(a, *ft_toupper));
//     return (0);
// }
