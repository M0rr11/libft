/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:54:54 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 21:54:57 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmpl;
	t_list	*next;

	if (!lst || !(*lst) || !del)
		return ;
	tmpl = *lst;
	while (tmpl)
	{
		next = tmpl->next;
		del(tmpl->content);
		free(tmpl);
		tmpl = next;
	}
	*lst = NULL;
}
