/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:37:30 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/21 18:30:07 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	int		len;

	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end >= start && ft_strchr(set, s1[end]) != NULL)
		end--;
	len = end - start + 1;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_memmove (result, &s1[start], len);
	result[len] = '\0';
	return (result);
}

// int main ()
// {
// 	const char A[] = "ok mon gars";
// 	char check[] = "~/-";
// 	char *rslt = ft_strtrim(A, check);
// 	if (rslt) {
//         printf("Trimmed result: '%s'\n", rslt);
//         free(rslt);
//     } else {
//         printf("Memory allocation failed\n");
//     }
// 	return (0);
// }