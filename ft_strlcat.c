#include <stdlib.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    i = 0;
    size_t dl;
    size_t sl;

    while(dst[dl])
        dl++;
    while(src[sl])
        sl++;
    if(dl = size)
    return (dl + sl);
    //sl  = ft_strlen(src);
    while(src[i] && i < size)
    {
        dst[dl + i] = src[i];
        i++;
    }
    dst[dl + i] = '\0';
    return (dl + sl);
}
#include<stdio.h>

int main()
{
    char *src = "ok";
    char dst[] = "hi";
    printf("%zu  ",ft_strlcat(dst,src,3));
}