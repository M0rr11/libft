/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:00:04 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 22:00:06 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		st;
	int		ed;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	st = 0;
	ed = ft_strlen(s1) - 1;
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	while (ed > st && ft_strchr(set, s1[ed]))
		ed--;
	p = ft_substr(s1, st, ed - st + 1);
	return (p);
}
