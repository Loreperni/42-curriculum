/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:40:35 by  lpernici         #+#    #+#             */
/*   Updated: 2025/04/29 15:40:35 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int target_char)
{
	const char	*last_occurrance = NULL;

	while (*string)
	{
		if (*string == (char)target_char)
			last_occurrance = string;
		string++;
	}
	if ((char)target_char == '\0')
		return ((char *)string);
	return ((char *) last_occurrance);
}
