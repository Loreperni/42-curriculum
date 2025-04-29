/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:52:15 by  lpernici         #+#    #+#             */
/*   Updated: 2025/04/29 17:52:15 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *source_string)
{
	size_t	length;
	size_t	i;
	char	*copy;

	length = 0;
	while (source_string[length])
		length++;
	copy = (char *)malloc(length + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < length)
	{
		copy[i] == source_string[i];
		i++;
	}
	copy[i] == '\0';
	return (copy);
}
