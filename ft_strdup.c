#include "libft.h"

char *ft_strdup(const char *s1) {
  int l = ft_strlen(s1);
  char *p;

  p = malloc(l + 1);
  if (p == NULL)
    return (NULL);
  
  int i;
  i = 0;

  while (s1[i]) {
    p[i] = s1[i];
    i++;
  }
  p[i] = '\0';
  return (p);
  }