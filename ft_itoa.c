/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:47:35 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:47:36 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count(int n)
{
    int count = 1;
    while(n / 10 != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
char    *ft_itoa(int nbr)
{
    int long n = nbr;
    int l = count(n);
    int s = 0;

    if(n < 0)
    {
        s = 1;
        n *= -1;
    }
    char *str = malloc(l + 1);
    if(s == 1)
        str[0] = '-';
    str[l + s] = '\0';
    while(l > 0)
    {
        str[l + s - 1] = n % 10 + 48;
        n /= 10;
        l--;
    }
    return str;
}