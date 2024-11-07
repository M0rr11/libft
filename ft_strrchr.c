/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:24 by nyx               #+#    #+#             */
/*   Updated: 2024/11/07 21:26:48 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    char *str;
	int i;
    str = (char *)s;
    i = 0;
    
        while (str[i])
          i++;
        if (c == '\0')
          return (str + i);

        while (i >= 0) {
          if (str[i] == (unsigned char)c)
            return (str + i);
          i--;
        }
        return (NULL);
}