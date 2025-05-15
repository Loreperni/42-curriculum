/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:55:55 by  lpernici         #+#    #+#             */
/*   Updated: 2025/05/15 00:36:08 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	parse_format(va_list args, const char format)
{
	int	size;

	size = 0;
	if (format == 'c')
		size += ft_print_char(va_arg(args, int));
	else if (format == 's')
		size += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		size += ft_print_ptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		size += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		size += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		size += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		size += ft_print_char('%');
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		size;
	va_list	args;

	if (!str)
		return (-1);
	i = 0;
	size = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			size += parse_format(args, str[i + 1]);
			i++;
		}
		else
			size += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (size);
}
