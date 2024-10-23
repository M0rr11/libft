void bzero(void *s, size_t n)
{
    char *str = (char *)s;
    size_t i;
    i = 0;
    while(i < n)
    {
        str[i] = 0;
        i++;
    }
}
