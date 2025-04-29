/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:56:23 by  lpernici         #+#    #+#             */
/*   Updated: 2025/04/29 14:56:23 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	unsigned int	i;

	dest_ptr = (unsigned char *)destination;
	src_ptr = (const unsigned char *)source;
	i = 0;
	if (dest_ptr > src_ptr && dest_ptr < src_ptr + size)
	{
		while (size--)
			dest_ptr[size] = src_ptr[size];
	}
	else
	{
		while (i < size)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (destination);
}
