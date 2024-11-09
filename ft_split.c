/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:39 by nyx               #+#    #+#             */
/*   Updated: 2024/11/08 18:43:14 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(const char *s, char c)
{
	int	i;
	int cnt;

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
void 	aloc(char const *str, int ct, char c, char **sp) {
  int	k;
  int	i;
  int	l;
  int	j;

  j = 0;
  i = 0;
  k = 0;
  l = 0;
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
		k = 0;
		while (k < j)
		{
			free(sp[k]);
			k++;
		}
		free(sp);
		return;
	}
	j ++;
	i += l;
	if (str[i] == c)
	i++;        
}
}

char	**ft_split(char const *str, char c)
{
	int		ct;
    char **sp;
    
	if(str == NULL)
		return NULL;
	ct = count(str, c);
	sp = (char **)malloc((ct + 1) * sizeof(char *));
	if (sp == NULL)
		return (NULL);
    aloc(str, ct,c,sp);    
	ft_fill(str, sp, c, ct);
	return (sp);
}

#include <stdio.h>

int main() {
  char **p = ft_split("", '\0');
  /*for (int i = 0; i < count(NULL, ' '); i++)
  {
      printf("%d\t", count (NULL, ' '));
    printf("%s\n",p[i]);
  }*/
  int i = 0;
  if (p == NULL)
	return (71);
  while (p[i])
  {
    printf("%s",p[i]);
	printf("\n");
	i++;
  }
  i = 0;
  while (p[i])
  {
	free(p[i]);
	i++;
  }
  free (p);
}
