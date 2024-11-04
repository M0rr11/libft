/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:47:46 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 19:10:53 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)) {

  t_list *tmpl;
  t_list *next;
  
  tmpl = *lst;
    if (!lst || !(*lst) || !del)
      return;
    
    while (tmpl) {
      next = tmpl->next;
      del(tmpl->content);
      free(tmpl);
      tmpl = next;
    }
     *lst = NULL;   
}