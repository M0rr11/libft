#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *str = (char *)s;
    int i;
    i = 0;
    while (str[i])
      i++;
    while(i > 0)
    {
        if(str[i] == c)
        return (char *)str + i;
    i--;
    }
    return NULL;
}