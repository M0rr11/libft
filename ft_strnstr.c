/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:19 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 18:16:54 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	if (to_find == NULL)
		return ((char *)to_find);
	while (str[i] && i + ft_strlen(to_find) < len)
	{
			if (ft_strncmp(str + i, (char *)to_find, ft_strlen(to_find)) == 0)
				return (char *)(str + i);
		i++;
	}
	return (NULL);
}