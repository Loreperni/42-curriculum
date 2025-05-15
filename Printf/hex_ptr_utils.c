/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_ptr_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:55:38 by  lpernici         #+#    #+#             */
/*   Updated: 2025/05/15 18:41:36 by  lpernici        ###   ########.fr       */
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

int	ft_print_ptr(unsigned long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		return (ft_print_str("(nil)"));
	count += ft_print_str("0x");
	count += print_ptr_hex(ptr);
	return (count);
}

int	ft_print_hex(unsigned int num, int uppercase)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
		count += ft_print_hex(num / 16, uppercase);
	count += ft_print_char(base[num % 16]);
	return (count);
}
