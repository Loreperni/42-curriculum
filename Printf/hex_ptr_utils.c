/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_ptr_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:55:38 by  lpernici         #+#    #+#             */
/*   Updated: 2025/05/14 21:05:31 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_ptr_hex(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_ptr_hex(n / 16);
	count += ft_print_char("0123456789abcdef"[n % 16]);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int				count;
	unsigned long	value;

	count = 0;
	if (!ptr)
		return (ft_print_str("0x0"));
	value = (unsigned long)ptr;
	count += ft_print_str("0x");
	count += print_ptr_hex(value);
	return (count);
}

int	ft_print_hex(unsigned int n, int uppercase)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += ft_print_hex(n / 16, uppercase);
	count += ft_print_char(base[n % 16]);
	return (count);
}
