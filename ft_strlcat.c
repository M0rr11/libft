#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    i = 0;
    size_t dl;
    size_t sl;

    dl = ft_strlen(dst);
    sl = ft_strlen(src);

    if (dl == size)
      return (dl + sl);

    while(src[i] && i < size)
    {
        dst[dl + i] = src[i];
        i++;
    }
    dst[dl + i] = '\0';
    return (dl + sl);
}