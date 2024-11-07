/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:51 by nyx               #+#    #+#             */
/*   Updated: 2024/11/07 21:34:04 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;
    size_t i;
        
	if (!s)
          return (NULL);
    if (start >= ft_strlen(s))
		return (NULL);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0') 
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
