/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:17 by nyx               #+#    #+#             */
/*   Updated: 2024/11/06 17:52:00 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;

	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ( (unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
    }
    if (i < n)
      return (unsigned char)s1[i] - (unsigned char)s2[i];
	return (0);
}