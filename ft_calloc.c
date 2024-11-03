#include "libft.h"

void *ft_calloc(size_t count, size_t size) {
  
  if (count == 0 || size == 0)
    return NULL;

  unsigned char *p;
  p = malloc(sizeof(char) * (count * size));
  if (p == NULL)
    return NULL;
  size_t i;
  i = 0;
  while (i < size * count) {
    p[i] = 0;
    i++;
  }
  return (p);
}