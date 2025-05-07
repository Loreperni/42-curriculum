/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:54:20 by  lpernici         #+#    #+#             */
/*   Updated: 2025/05/07 13:54:20 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_str(char *str, int n, int len)
{
	int	is_negative;

	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	str[len] = '\0';
	while (len-- > is_negative)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_digits(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	fill_str(str, n, len);
	return (str);
}
