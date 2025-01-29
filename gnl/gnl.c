/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:50:19 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/29 14:40:41 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include "../lib42.h"
#include <fcntl.h>

char	*ft_update(char *gnl);
char	*ft_get_line(char *gnl);
char	*ft_read_input(int fd, char *gnl);
char	*get_next_line(int fd);

char	*ft_update(char *gnl)
{
	size_t	i;
	size_t	j;
	char	*new_gnl;

	i = 0;
	while (gnl[i] && gnl[i] != '\n')
		i++;
	if (!gnl[i])
	{
		free (gnl);
		return (NULL);
	}
	new_gnl = malloc(ft_strlen(gnl) - i + 1);
	if (!new_gnl)
		return (NULL);
	i++;
	j = 0;
	while (gnl[i])
		new_gnl[j++] = gnl[i++];
	new_gnl[j] = '\0';
	free (gnl);
	return (new_gnl);
}

char	*ft_get_line(char *gnl)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!gnl[i] || !gnl)
		return (NULL);
	line = malloc(ft_isnewl(gnl) + 1);
	if (!line)
		return (NULL);
	while (gnl[i] && gnl[i] != '\n')
	{
		line[i] = gnl[i];
		i++;
	}
	if (gnl[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_read_input(int fd, char *gnl)
{
	char	*buffer;
	int		bytes;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(gnl, '\n') && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free (gnl);
			free (buffer);
			return (NULL);
		}
		buffer[bytes] = '\0';
		gnl = ft_strjoin_gnl(gnl, buffer);
		if (!gnl)
			return (free(buffer), NULL);
	}
	free (buffer);
	return (gnl);
}

char	*get_next_line(int fd)
{
	static char	*gnl[FD_MAX] = {0};
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	gnl[fd] = ft_read_input(fd, gnl[fd]);
	if (!gnl[fd])
		return (NULL);
	line = ft_get_line(gnl[fd]);
	gnl[fd] = ft_update(gnl[fd]);
	return (line);
}

// int main(int argc, char const *argv[])
// {
// 	char *test;
// 	int fd;
// 	(void)argc;
// 	(void)argv;
// 	printf("test");
// 	fd = open("../test", O_RDONLY);
// 	printf("%d\n", fd);
// 	test = get_next_line(fd);
// 	while (test != NULL)
// 	{
// 		ft_printf("%s", test);
// 		free(test);
// 		test = get_next_line(fd);
// 	}
// 	return (0);
// }
