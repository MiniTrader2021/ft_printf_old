/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adadgar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:17:12 by adadgar           #+#    #+#             */
/*   Updated: 2022/07/22 12:17:33 by adadgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*head;

	head = NULL;
	if (lst == NULL || f == NULL )
		return (NULL);
	while (lst != NULL)
	{
		newlst = ft_lstnew(f (lst->content));
		if (newlst == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, newlst);
	lst = lst->next;
	}
	return (head);
}
