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

#include "libft.h"

char	*ft_strdup(const char *source_string)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(source_string) + 1;
	copy = (char *)malloc(len);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, source_string, len);
	return (copy);
}
