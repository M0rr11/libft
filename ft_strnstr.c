#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    i = 0;
    if (needle == NULL)
      return (char *)needle;
    while(haystack[i] && i < len)
    {
        if(haystack[i] == needle[0])
        {
            if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
                return (char *)(haystack + i);
        }
        i++;
    }
    return NULL;
}