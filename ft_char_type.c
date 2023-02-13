/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadgar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:06:06 by adadgar           #+#    #+#             */
/*   Updated: 2023/01/23 14:49:33 by adadgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char_type(const char c, va_list v, int *i)
{
	if (c == 'c')
		return (ft_char_print(va_arg(v, int)));
	if (c == 's')
		return (ft_str_print(v));
	if (c == 'i' || c == 'd')
		return (ft_num_print(va_arg(v, int)));
	if (c == 'u')
		return (ft_num_print(va_arg(v, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_hex_print(va_arg(v, unsigned int), c));
	if (c == 'p')
		return (ft_hex_print(va_arg(v, unsigned long), c));
	if (c == '%')
		return (ft_char_print(c));
	if (!c)
		return (0);
	else
		*i = *i - 1;
	return (0);
}
