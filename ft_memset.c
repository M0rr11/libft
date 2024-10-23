
#include <string.h>
void *ft_memset(void *s, int c, size_t n)
{
    char *x = (char *)s;
    char w = c; 
    size_t i = 0;
    while( i < n)
    {
        x[i] = w;
        i++;
    }
}
#include <stdio.h>

int main()
{
    int s = 6;

    printf("%d\n", s);
    //ft_memset(&s, 50, 2);
    memset(&s,50,6);
    printf("%d\n", s);
}