/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:22 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 21:47:47 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *x = (char *)s;
	char w = c;
	size_t i;
	i = 0;

	while (i < n)
	{
		x[i] = w;
		i++;
	}
	return ((void *)x);
}
// #include <stdio.h>

// int main()
// {
// 	char s[20] = "GFREF";
// 	printf("%s\n",ft_memset(s,65,3));
// }