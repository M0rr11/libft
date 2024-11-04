/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:17 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:49:18 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, char *s2, size_t n)
{
    size_t i;
    i = 0;
    
    while(s1[i] && i < n)
    {
        if(s1[i] != s2[i])
        return s1[i] - s2[i];
    i++;
    }
    return 0;
}