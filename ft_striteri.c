/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:29:55 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/23 14:55:39 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !(*s) || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
	return ;
}

// char	ft_toupper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c -= 32;
// 		return (*c);
// 	}
// 	return (*c);
// }

// int main()
// {
//     char a[] = "oui";
//     printf("%s\n", a);
// 	ft_striteri(a, *ft_toupper);
//     printf("%s", a);
//     return (0);
// }
