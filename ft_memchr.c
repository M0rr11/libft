#include <stdlib.h>
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
#include <stdio.h>
int main()
{
    int m[] = {2,5};
    if( ft_memchr(m,5,4) != NULL)
    printf("cool\n");
else 
printf("not cool\n");
}