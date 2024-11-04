/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:19 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:48:20 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d = (char *)dest;
    const char *s = (const char *)src;
    
    if (d == s || n == 0)
        return dest;
    size_t i;
    i = 0;
    if (d > s) {
      i = n;
      while (i > 0) {
        d[i - 1] = s[i - 1];
        i--;
      }
    }
    else
          ft_memcpy(d,s,n);
    return dest;
}
