/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:51:19 by  lpernici         #+#    #+#             */
/*   Updated: 2025/04/29 13:51:19 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *memory_block, size_t size)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)memory_block;
	i = 0;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
}
