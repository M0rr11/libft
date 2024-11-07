/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:47:35 by nyx               #+#    #+#             */
/*   Updated: 2024/11/07 20:27:17 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	count;

    count = 1;
    if (n < 0)
	{
		count++;  
		n *= -1;  
	}
	while (n / 10 != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
char	*ft_itoa(int nbr)
{
    long n;
    int l;
    int s;
    n = nbr;
    l = count(n);
    s = 0;
    if (n < 0)
    {
        s = 1;
        n *= -1;
    }
    char *str = malloc(l + 1);
    if (str == NULL)
		return (NULL); 
    if (s)
      str[0] = '-';
    str[l] = '\0';
    while (l  > s)
    {
        str[l - 1] = (n % 10) + 48;
        n /= 10;
        l--;
    }
    return (str);
}