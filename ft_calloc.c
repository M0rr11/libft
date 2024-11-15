/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:53:28 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 21:53:29 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = malloc(sizeof(char) * (count * size));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
