/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:55 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:48:56 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2) {
    int l;
    int n;
    l = ft_strlen(s1);
    n = ft_strlen(s2);
    char *p;
    p = malloc(sizeof(char) * (l + n + 1));
    if(p == NULL)
    return NULL;
    int i;
    i = 0;
    while(i < l + n && s1[i])
    {
        p[i] = s1[i];
        i++;
    }
    int j;
    j = 0;
    while(i < l + n && s2[j])
    {
        p[i] = s2[j];
        i++;
        j++;
     }
     p[i] = '\0';
     return (p);
    }
