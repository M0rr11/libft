/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:02 by nyx               #+#    #+#             */
/*   Updated: 2024/11/06 17:26:15 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	i = 0;
	size_t dl;
	size_t sl;

	dl = ft_strlen(dst);
	sl = ft_strlen(src);

	if (size <= dl)
		return (size + sl);
	while (src[i] && dl + i < size - 1)
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}

// int main ()
// {
// 	strnstr(NULL, NULL, 0);
// }