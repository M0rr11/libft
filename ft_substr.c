/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:51 by nyx               #+#    #+#             */
/*   Updated: 2024/11/08 17:11:21 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;
    size_t i;
    size_t s_len;

    s_len = ft_strlen(s);
	if (!s)
          return (NULL);
    if (start > s_len)
      return (ft_strdup(""));
    if (len > s_len - start)
		len = s_len - start;
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
/*
#include <stdio.h>

int main ()
{
    char *i  ;
    i = ft_substr("NULL", 400, 20);
    printf("%s", i);
}*/
