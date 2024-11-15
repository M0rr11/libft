/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:57:02 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/16 00:29:17 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*x;
	char	w;
	size_t	i;

	x = (char *)s;
	w = c;
	i = 0;
	while (i < n)
	{
		x[i] = w;
		i++;
	}
	return (s);
}
