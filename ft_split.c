/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:57:56 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 22:39:10 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(const char *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

void	ft_fill(char const *s, char **p, char cc, int count)
{
	int	j;
	int	i;
	int	f;

	j = 0;
	i = 0;
	if (p == NULL)
		return ;
	while (j < count && s[i])
	{
		while (s[i] == cc)
			i++;
		f = 0;
		while (s[i] && s[i] != cc)
			p[j][f++] = s[i++];
		p[j][f] = '\0';
		j++;
		if (s[i] == cc)
			i++;
	}
	p[j] = NULL;
}

void	destroy_sp(char **sp, int index)
{
	int	k;

	k = 0;
	while (k < index)
	{
		free(sp[k]);
		k++;
	}
	free(sp);
	return ;
}

void	aloc(char const *str, int ct, char c, char **sp)
{
	int	i;
	int	l;
	int	j;

	j = 0;
	i = 0;
	while (j < ct && str[i])
	{
		while (str[i] == c)
			i++;
		l = 0;
		while (str[i + l] && str[i + l] != c)
			l++;
		sp[j] = (char *)malloc((l + 1) * sizeof(char));
		if (!sp[j])
		{
			destroy_sp(sp, j);
			sp = NULL;
			return ;
		}
		j++;
		i += l;
		if (str[i] == c)
			i++;
	}
}

char	**ft_split(char const *str, char c)
{
	int		ct;
	char	**sp;

	if (!str)
		return (NULL);
	ct = count(str, c);
	sp = (char **)malloc((ct + 1) * sizeof(char *));
	if (sp == NULL)
		return (NULL);
	aloc(str, ct, c, sp);
	ft_fill(str, sp, c, ct);
	return (sp);
}
