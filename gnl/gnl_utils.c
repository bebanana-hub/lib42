/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:01:07 by vgalloni          #+#    #+#             */
/*   Updated: 2024/11/13 15:38:56 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include "../libft.h"

char	*ft_strjoin_gnl(char *s1, char *s2);
size_t	ft_isnewl(char *gnl);

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		dest[i] = s1[i];
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	free(s1);
	return (dest);
}

size_t	ft_isnewl(char *gnl)
{
	size_t	i;

	i = 0;
	while (gnl[i] && gnl[i] != '\n')
		i++;
	if (gnl[i] == '\n')
		i++;
	return (i);
}
