/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countfd_lines.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:30:42 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/29 14:40:41 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

int	ft_countfd_lines(int fd)
{
	int		bytes_read;
	char	buffer[1024];
	int		size;
	int		i;

	size = 0;
	bytes_read = 1;
	while (bytes_read > 0)
	{
		i = 0;
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read == -1)
			return (-1);
		while (i < bytes_read)
		{
			if (buffer[i] == '\n')
				size++;
			i++;
		}
	}
	lseek(fd, 0, SEEK_SET);
	return (size);
}
