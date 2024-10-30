#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *p;
    size_t i;
    
    p = malloc(len + 1);
    
    if (p == 0)
		return (NULL);
    i = 0;
    while(i <len)
        {
            p[i] = s[start];
            i++;
            start++;
        }
    p[i] = '\0';
    return (p);
}
