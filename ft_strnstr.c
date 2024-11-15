/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:59:44 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 22:36:50 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	find_len;

	if (!str)
		return (NULL);
	if (*to_find == '\0')
		return ((char *)str);
	i = 0;
	find_len = ft_strlen(to_find);
	while (str[i] && i + find_len <= len)
	{
		if (ft_strncmp(str + i, to_find, find_len) == 0)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
