/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:45 by nyx               #+#    #+#             */
/*   Updated: 2024/11/07 21:12:06 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
    unsigned char cd;
    cd = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cd)
			return ((char *)s + i);
		i++;
    }
    if (cd == '\0')
      return ((char *)(s + i));  
	return (NULL);
}