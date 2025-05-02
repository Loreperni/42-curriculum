/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:25:27 by  lpernici         #+#    #+#             */
/*   Updated: 2025/04/29 13:25:27 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memory_block, int value, size_t size)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)memory_block;
	i = 0;
	while (i < size)
	{
		ptr[i++] = (unsigned char)value;
	}
	return (memory_block);
}
