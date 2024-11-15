/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:58:29 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 21:58:32 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	*p;
	int		i;
	int		j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2);
	p = malloc(sizeof(char) * (total_len + 1));
	if (p == NULL)
		return (NULL);
	i = -1;
	while (++i < total_len && s1[i])
		p[i] = s1[i];
	j = 0;
	while (i < total_len && s2[j])
		p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}
