/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:47:41 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 18:49:12 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	if (!new_node)
		return ;

	if (*lst == NULL)
		*lst = new_node;

	t_list *last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
}