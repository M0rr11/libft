/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:56:14 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 21:56:17 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*st = (char *)s;
	const char	cc = c;
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (st[i] == cc)
			return ((char *)st + i);
		i++;
	}
	return (0);
}
