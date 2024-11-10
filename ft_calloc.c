/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:47:09 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:47:10 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *p;
	size_t i;
	
	p = malloc(sizeof(char) * (count * size));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		printf("s\n");
		p[i] = 0;
		i++;
	}
	return (p);
}

// int main ()
// {
// 	//char *s = ft_calloc(4783657384,  434);
// 	printf("%s\n", s);
// }