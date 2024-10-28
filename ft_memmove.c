#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d = (char *)dest;
    const char *s = (char *)src;
    size_t i;
    i = 0;
    if (d > s) {
      i = n;
      while (s[i]) {
        d[i - 1] = s[i - 1];
        i++;
      }
    }
    else
          ft_memcpy(d,s,i);
    return dest;
}