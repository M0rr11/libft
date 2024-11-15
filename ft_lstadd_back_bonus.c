/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:54:38 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 21:54:41 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last;

	if (!new_node)
		return ;
	if (*lst == NULL)
		*lst = new_node;
	else
	{
		last = *lst;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
}
