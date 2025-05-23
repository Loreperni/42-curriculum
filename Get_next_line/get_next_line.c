/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:51:05 by  lpernici         #+#    #+#             */
/*   Updated: 2025/05/23 22:16:23 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_from_fd(int fd, char *leftover)
{
	char	*buffer;
	char	*temp;
	int		bytes_read;

	if (!leftover)
		leftover = ft_strdup("");
	if (!leftover)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (free(leftover), NULL);
	bytes_read = 1;
	while (!ft_strchr(leftover, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(buffer), free(leftover), NULL);
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(leftover, buffer);
		free(leftover);
		leftover = temp;
		if (!leftover)
			return (free(buffer), NULL);
	}
	return (free(buffer), leftover);
}

static char	*extract_line(char *leftover)
{
	char	*line;
	int		i;

	i = 0;
	if (!leftover || !leftover[i])
		return (NULL);
	while (leftover[i] && leftover[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (leftover[i] && leftover[i] != '\n')
	{
		line[i] = leftover[i];
		i++;
	}
	if (leftover[i] == '\n')
	{
		line[i++] = '\n';
	}
	line[i] = '\0';
	return (line);
}

static char	*get_remaining(char *leftover)
{
	char	*remaining;
	int		i;
	int		j;

	i = 0;
	if (!leftover)
		return (NULL);
	while (leftover[i] && leftover[i] != '\n')
		i++;
	if (!leftover[i])
	{
		free(leftover);
		return (NULL);
	}
	remaining = (char *)malloc(sizeof(char)
			* (ft_strlen(leftover + i + 1) + 1));
	if (!remaining)
		return (NULL);
	i++;
	j = 0;
	while (leftover[i])
		remaining[j++] = leftover[i++];
	remaining[j] = '\0';
	free(leftover);
	return (remaining);
}

char	*get_next_line(int fd)
{
	static char	*leftover;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0) < 0)
		return (NULL);
	leftover = read_from_fd(fd, leftover);
	if (!leftover)
		return (NULL);
	line = extract_line(leftover);
	leftover = get_remaining(leftover);
	return (line);
}
