#include <stdlib.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d = (char *)dest;
    const char *s = (char *)src;
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
    char s[] = "hello world";
    ft_memmove(s, s + 6, 3);
    printf("%s\n",s);
}