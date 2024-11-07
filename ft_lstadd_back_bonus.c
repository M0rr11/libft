/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:47:41 by nyx               #+#    #+#             */
/*   Updated: 2024/11/07 21:00:16 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	if (!new_node)
		return ;

    if (*lst == NULL)
          *lst = new_node;
    else {
      t_list *last = *lst;
      while (last->next != NULL)
        last = last->next;
      
      last->next = new_node;
		}
}