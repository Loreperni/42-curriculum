/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:29:13 by  lpernici         #+#    #+#             */
/*   Updated: 2025/04/29 15:29:13 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *string, int target_char)
{
	while (*string)
	{
		if (*string == (char)target_char)
			return ((char *)string);
		string++;
	}
	if ((char)target_char == '\0')
		return ((char *)string);
	return (NULL);
}
