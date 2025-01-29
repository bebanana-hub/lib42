/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:12:50 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/29 14:40:41 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;
	size_t	ind;
	size_t	max;

	i = ft_strlen (src);
	j = ft_strlen (dest);
	if (size <= j)
		return (i + size);
	ind = 0;
	max = size - j - 1;
	while (ind < max && src[ind])
	{
		dest[j + ind] = src[ind];
		ind++;
	}
	dest[j + ind] = '\0';
	return (i + j);
}

// int main()
// {
// 	const char *src1 = "lorem ipsum dolor sit amet";
// 	char dest1[10] = "here:";
// 	printf("1 :%s,%s\n", src1 ,dest1);
// 	printf("1 :%zu\n", ft_strlcat(dest1, src1, 0));
// 	printf("1 :%s,%s\n", src1 ,dest1);

// 	const char *src2 = "lorem ipsum dolor sit amet";
// 	char dest2[10] = "here:";
// 	printf("2 :%s,%s\n", src2 ,dest2);
// 	printf("2 :%zu\n", strlcat(dest2, src2, 0));
// 	printf("2 :%s,%s\n", src2 ,dest2);
// 	return (0);
// }