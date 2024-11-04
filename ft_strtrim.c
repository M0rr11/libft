/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:46 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:49:47 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
char *ft_strtrim(char const *s1, char const *set) 
{
    int i;
    int l;
    int n;

    i = 0;
    l = ft_strlen(s1);
    n = ft_strlen(set);
    while(s1[i] && s1[i] == set[i])
    i++;
    l--;
    n--;
    while(l > 0 && s1[l] == set[n])
    l--;
    n--;
    char *p;
    p = malloc(sizeof(char) * (l - i + 1));
    if(p == NULL)
    return NULL;
    n =0;
    while(n < l - i)
    {
        p[n] = s1[i + n];
        n++;
    }
    p[n] = '\0';
    return (p);
}
    #include <stdio.h>
    int main()
    {
      char *s = "hi lololol hi";
      printf("%s\n",ft_strtrim(s,"hi"));
    }