#include <stdlib.h>
#include <string.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    i = 0;
    if(needle == NULL)
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
    // if(!(needle[i]))
    // return 
    return NULL;
}

#include <bsd/string.h>
#include <stdio.h>
int main()
{
    printf("%s\n", strnstr("foo bar baz bar s","bar", 4000));
    printf("%s", ft_strnstr("foo bar baz bar s","bar", 4000));
    printf("\n");
}