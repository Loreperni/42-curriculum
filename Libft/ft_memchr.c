/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:17:23 by  lpernici         #+#    #+#             */
/*   Updated: 2025/04/29 16:17:23 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *memory_block, int target_byte, size_t size)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (const unsigned char *)memory_block;
	i = 0;
	while (i < size)
	{
		if (ptr[i] == (unsigned char)target_byte)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
