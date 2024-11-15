/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:54:29 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 21:54:32 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(long *nb, int *s)
{
	int		count;
	long	n;

	count = 1;
	if (*nb < 0)
	{
		*nb *= -1;
		*s = 1;
		count++;
	}
	n = *nb;
	while (n / 10 != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		l;
	int		s;
	char	*str;

	n = nbr;
	s = 0;
	l = count(&n, &s);
	str = malloc(l + 1);
	if (str == NULL)
		return (NULL);
	if (s)
		str[0] = '-';
	str[l] = '\0';
	while (l > s)
	{
		str[l - 1] = (n % 10) + 48;
		n /= 10;
		l--;
	}
	return (str);
}
