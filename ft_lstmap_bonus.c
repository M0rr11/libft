/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:55:44 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 21:55:48 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*tmp;
	t_list	*node;

	list = NULL;
	node = NULL;
	if (!lst || !f || !del)
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		node = ft_lstnew(f(tmp->content));
		if (!node)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		tmp = tmp->next;
	}
	return (list);
}
