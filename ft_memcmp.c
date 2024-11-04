/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:08 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:48:09 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1 = (char *)s1;
	char *str2 = (char *)s2;
	size_t i;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (1);
		i++;
	}
	return (0);
}