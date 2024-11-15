/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:58:05 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 21:58:08 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	cd;

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
