/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:46:35 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/21 18:41:34 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc( size_t num, size_t size);

void	*ft_calloc( size_t num, size_t size)
{
	void	*result;

	result = malloc(num * size);
	if (result == NULL)
		return (NULL);
	ft_memset (result, 0, num * size);
	return (result);
}

// int main()
// {
// 	char *a = (char *)ft_calloc(5, sizeof(char));
// 	char *b = (char *)calloc(5, sizeof(char));
// 	printf("%s", a);
// 	printf("%s", b);
// 	return (0);
// }