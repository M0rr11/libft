/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:47:57 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 20:58:57 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
  t_list *list;
  t_list *tmp;
  t_list *node;

  tmp = lst;
  list = NULL;
  node = NULL;
  if (!lst || !f || !del)
    return NULL;
  while (tmp) {
    node = ft_lstnew(f(lst->content));
    if (!node) {
      ft_lstclear(&list, del);
      return NULL;
    }
    ft_lstadd_back(&list,node);
    tmp = tmp->next;
  }
  return list;
}