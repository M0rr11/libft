/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:19 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:48:20 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s = (const char *)src;
	size_t		i;

	d = (char *)dest;
	if (d == s || n == 0)
		return (dest);
	i = 0;
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
// #include <stdio.h>
// int main ()
// {
// 	char s[20] = "ABCDEF";
// 	char s1[20] = "ABCDEF";
// 	printf("%s\n",ft_memmove(s +2,s,0));
// 	printf("%s\n", memmove(s1 +2,s1,0));
// }