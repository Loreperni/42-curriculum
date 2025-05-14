/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:54:44 by  lpernici         #+#    #+#             */
/*   Updated: 2025/05/14 21:06:20 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int character)
{
	write(1, &character, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	size;

	size = 0;
	if (str == 0)
		return (ft_print_str("(null)"));
	while (str[size])
	{
		size += ft_print_char(*str);
		str++;
	}
	return (size);
}

int	ft_print_unsigned(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (ft_print_char('0'));
	if (n >= 10)
		size += ft_print_unsigned(n / 10);
	size += ft_print_char((n % 10) + '0');
	return (size);
}

int	ft_print_nbr(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
	{
		size += ft_print_str("-2147483648");
		return (size);
	}
	if (n < 0)
	{
		size += ft_print_char('-');
		n = -n;
	}
	if (n == 0)
		size += ft_print_char('0');
	else
		size += ft_print_unsigned((unsigned int)n);
	return (size);
}
