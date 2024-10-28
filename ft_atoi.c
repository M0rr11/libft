#include "libft.h"

int ft_atoi(const char *s)
{
    int r;
    int si;
    int i;
    r = 0;
    si = 1;
    i = 0;
    while (s[i] == ' ' || s[i] == '\t')
      i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            si = -1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        r = r * 10 + (s[i] - 48);
        i++;
    }
    return (r * si);
}