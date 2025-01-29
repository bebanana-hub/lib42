/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:20:19 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/29 14:40:41 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	fstlen;
	char	*result;

	if (len < 1)
		return ((char *)ft_calloc(1, 1));
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ((char *)ft_calloc(1, 1));
	fstlen = ft_strlen(&s[start]);
	if (fstlen < len)
		result = (char *)malloc((fstlen + 1) * sizeof(char));
	else
		result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (fstlen < len)
		ft_strlcpy(result, &s[start], fstlen + 1);
	else
		ft_strlcpy(result, &s[start], len + 1);
	return (result);
}

// int main()
// {
// 	const char *a ="prends cette phrase";
// 	char b = 'c';
// 	int c = 5;
// 	printf("%s", ft_substr(a,b,c));
// 	return (0);
// }