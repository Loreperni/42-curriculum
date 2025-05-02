/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:38:30 by  lpernici         #+#    #+#             */
/*   Updated: 2025/04/29 17:38:30 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*memory_block;
	unsigned int	total_size;
	unsigned int	i;

	total_size = count * size;
	memory_block = (unsigned char *)malloc(total_size);
	if (!memory_block)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		memory_block[i] = 0;
		i++;
	}
	return ((void *)memory_block);
}
