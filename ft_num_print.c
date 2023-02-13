/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadgar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:39:38 by adadgar           #+#    #+#             */
/*   Updated: 2023/01/23 14:40:01 by adadgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_num(size_t n)
{
	if (n > 9)
	{
		ft_put_num(n / 10);
		ft_put_num(n % 10);
	}
	if (n < 10)
		ft_putchar_fd(n + 48, 1);
}

int	ft_num_print(long long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = -n;
		count++;
	}
	ft_put_num(n);
	count += ft_num_length(n, 10);
	return (count);
}
