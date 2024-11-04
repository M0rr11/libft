/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:05 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:48:06 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const char *st = (char *)s;
    const char cc = c;
    size_t i;
    i = 0;
    while(i < n)
    {
        if(st[i] == cc)
          return (char *)st;
        i++;
    }
    return 0;
}