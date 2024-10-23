#include <stdlib.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d = (char *)dest;
    char *s = (char *)src;
    size_t i;
    i = 0;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
}
#include <stdio.h>
int main()
{
    int r[] = {6,8};
    int r2[] = {2,5};
    
    ft_memcpy(r,r2,0);
    printf("%d %d\n",r[0],r[1]);
}