#include <stdlib.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *str1 = (char *)s1;
    char *str2 = (char *)s2;
    size_t i;
    i = 0;
    while(i < n)
    {
        if(str1[i] != str2[i])
        return 1;
    i++;
    }
      return 0;
}

#include <stdio.h>

int main()
{
    int s1[] = {2,5};
    int s2[] = {2,6};
    int r = ft_memcmp(s1, s2,8);
    printf("%d\n", r);
}