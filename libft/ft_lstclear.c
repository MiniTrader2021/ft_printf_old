/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadgar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:15:28 by adadgar           #+#    #+#             */
/*   Updated: 2022/07/22 12:15:52 by adadgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		new = *lst;
		*lst = (*lst)->next;
		ft_lstdelone (new, del);
	}
}
