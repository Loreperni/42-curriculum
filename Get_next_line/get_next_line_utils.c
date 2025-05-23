/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:02:00 by  lpernici         #+#    #+#             */
/*   Updated: 2025/05/23 21:52:20 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(const char *source_str)
{
	size_t	len;
	size_t	i;
	char	*copy;

	if (!source_str)
		return (NULL);
	len = ft_strlen(source_str) + 1;
	copy = (char *)malloc(sizeof(char) * len);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		copy[i] = source_str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strchr(const char *str, int target_char)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)target_char)
			return ((char *)str);
		str++;
	}
	if ((char)target_char == '\0')
		return ((char *)str);
	return (NULL);
}

char	*ft_substr(const char *str, size_t start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	s_len;
	size_t	max_len;

	if (!str)
		return (NULL);
	s_len = ft_strlen(str);
	if (start >= s_len)
		return (ft_strdup(""));
	max_len = s_len - start;
	if (len > max_len)
		len = max_len;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len && str[start + i])
	{
		substring[i] = str[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_str;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	joined_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!joined_str)
		return (NULL);
	i = -1;
	while (s1[++i])
		joined_str[i] = s1[i];
	j = 0;
	while (s2[j])
		joined_str[i++] = s2[j++];
	joined_str[i] = '\0';
	return (joined_str);
}
