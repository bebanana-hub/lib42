/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:00:53 by vgalloni          #+#    #+#             */
/*   Updated: 2024/11/26 16:58:00 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

char	*ft_update(char *gnl);
char	*ft_get_line(char *gnl);
char	*ft_read_input(int fd, char *gnl);
char	*get_next_line(int fd);
char	*ft_strjoin_gnl(char *s1, char *s2);
size_t	ft_isnewl(char *gnl);

#endif