/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadgar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:40:07 by adadgar           #+#    #+#             */
/*   Updated: 2023/01/23 14:56:10 by adadgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int i;
	int count;
	va_list args;

	va_start(args, str);

	i = 0;
	count = 0;
	while(str[i])
	{
		if(str[i] == '%')
		{
			i++;
			ft_char_type(str[i], args, &i);
			count ++;
		}
		else
				ft_putchar_fd(str[i], 1); // this function is present in libft as is
				count ++;
				i++;
	}
	va_end (args);
	if (count < 0)
		return (-1);
	return (count);
}
