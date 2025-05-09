/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:41:21 by  lpernici         #+#    #+#             */
/*   Updated: 2025/04/29 14:41:21 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned int		i;

	dest_ptr = (unsigned char *)destination;
	src_ptr = (const unsigned char *)source;
	i = 0;
	if (!destination && !source)
		return (0);
	while (i < size)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (destination);
}
