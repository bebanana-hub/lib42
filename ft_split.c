/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:38:00 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/29 14:40:41 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

char				**ft_split(char const *s, char c);
static int			ft_countwords(const char *str, char c);
static const char	*ft_cut(char **arr, size_t j, char const *s, char c);
static void			ft_del(char **arr, size_t j);

static int	ft_countwords(const char *str, char c)
{
	int	i;
	int	sum;
	int	wrd;

	i = 0;
	sum = 0;
	wrd = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (wrd)
				wrd = 0;
		}
		else if (!wrd)
		{
			sum++;
			wrd = 1;
		}
		i++;
	}
	return (sum);
}

static const char	*ft_cut(char **arr, size_t j, char const *s, char c)
{
	size_t	len;

	while (*s == c)
		s++;
	len = ft_strclen((char *)s, c);
	arr[j] = (char *)malloc((len + 1) * sizeof(char));
	if (!arr[j])
		return (NULL);
	ft_strlcpy(arr[j], s, len + 1);
	s += len;
	while (*s == c)
		s++;
	return (s);
}

static void	ft_del(char **arr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(arr[i]);
		i++;
	}
	free (arr);
	return ;
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	char	**arr;
	size_t	wrd;

	if (!s)
		return (NULL);
	j = 0;
	wrd = ft_countwords(s, c);
	arr = (char **)malloc((wrd + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (j < wrd)
	{
		s = ft_cut(arr, j, s, c);
		if (s == NULL)
		{
			ft_del(arr, j);
			return (NULL);
		}
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

// int main()
// {
//     const char *a = "oui no peut-etre";
//     char check = ' ';
// 	char **result = ft_split(a, check);
// 	for (int i = 0; result [i]; i++)
// 	{
// 		printf("%d :%s ", i, result[i]);
// 		if (result[i + 1] != NULL)
// 			printf("\n");
// 		free (result[i]);
// 	}
// 	free(result);
// 	return (0);
// }