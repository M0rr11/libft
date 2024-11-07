/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:49:46 by nyx               #+#    #+#             */
/*   Updated: 2024/11/07 20:48:50 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	int		i;
	int		l;
    int st;
    int ed;
	char	*p;

	i = 0;
    l = ft_strlen(s1);
    st = 0;
    ed = l - 1;
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	while (ed > st && ft_strchr(set, s1[ed]))
		ed--;
	p = malloc(sizeof(char) * (ed - st + 2));
	if (p == NULL)
		return (NULL);
	while (st + i <=  ed)
	{
		p[i] = s1[st + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}