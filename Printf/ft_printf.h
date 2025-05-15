/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:52:56 by  lpernici         #+#    #+#             */
/*   Updated: 2025/05/15 18:28:42 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_char(int character);
int	ft_print_str(char *str);
int	ft_print_unsigned(unsigned int n);
int	ft_print_nbr(int n);
int	ft_print_ptr(unsigned long ptr);
int	ft_print_hex(unsigned int num, int uppercase);

#endif
