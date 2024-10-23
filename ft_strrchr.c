#include <stdlib.h>
char *ft_strrchr(const char *s, int c)
{
    char *str = (char *)s;
    int i;
    i = 0;
    while(str[i])
    i++;
    while(i > 0)
    {
        if(str[i] == c)
        return (char *)str + i;
    i--;
    }
    return NULL;
}
#include <string.h>
#include <stdio.h>
int main()
{
    char *r = strrchr("This is a test",'s');
    char *no = strrchr("This is a test",'s');
    printf("%s\n",r);
    printf("%s\n",no);
}