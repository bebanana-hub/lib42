/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:13:11 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/10 17:07:16 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	else
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

// int main()
// {
// 	const char *src1 = "ca va pas ou quoi";
// 	const char *src2 = "ca va pas ou quoi";
// 	char dest1[10] = "ok";
// 	char dest2[10] = "ok";
// 	printf("1 :%s,%s\n", src1 ,dest1);
// 	ft_strlcpy(dest1, src1, sizeof(dest1));
// 	printf("2 :%s,%s\n", src2 ,dest2);
// 	strlcpy(dest2, src2, sizeof(dest2));
// 	printf("1 :%s,%s\n", src1 ,dest1);
// 	printf("2 :%s,%s\n", src2 ,dest2);
// 	printf("1 :%zu\n", ft_strlcpy(dest1, src1, sizeof(dest1)));
// 	printf("2 :%zu", strlcpy(dest2, src2, sizeof(dest2)));
// 	return (0);
// }