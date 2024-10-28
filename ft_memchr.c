#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const char *st = (char *)s;
    const char cc = c;
    size_t i;
    i = 0;
    while(i < n)
    {
        if(st[i] == cc)
          return (char *)st;
        i++;
    }
    return 0;
}