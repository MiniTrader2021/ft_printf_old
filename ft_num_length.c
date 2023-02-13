/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadgar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:38:58 by adadgar           #+#    #+#             */
/*   Updated: 2023/01/23 14:39:26 by adadgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_length(size_t n, int radix)
{
	int	count;

	if (!n)
		return (1);
	count = 0;
	while (n > 0)
	{
		n /= radix;
		count++;
	}
	return (count);
}
