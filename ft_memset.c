#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    char *x = (char *)s;
    char w = c;
    size_t i;
    i = 0;

    while( i < n)
    {
      x[i] = w;
      i++;
    }
}