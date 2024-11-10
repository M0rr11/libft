/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:19 by nyx               #+#    #+#             */
/*   Updated: 2024/11/07 18:50:16 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
  	size_t i;
  	size_t find_len;

    if (*to_find == '\0')
      return ((char *)str);
    i = 0;
	find_len = ft_strlen(to_find);   
	while (str[i] && i + find_len <= len)
	{
		if (ft_strncmp(str + i, to_find,find_len) == 0)
			return (char *)(str + i);
		i++;
	}
	return (NULL);
}
//TODO: FIX THIS
// #include <string.h>
// int main ()
// {
// 	//ft_strnstr(NULL , "ss", 0); SEGV
// }