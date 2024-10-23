int ft_atoi(const char *s)
{
    int r;
    int s;
    int i;
    r = 0;
    s = 1;
    i = 0;
    while(s[i] == ' ' || s[i] == '\t')
    i++;
    while(s[i] == '+' || s[i] == '-')
    {
        while(s[i] == '-')
        s = -1;
    i++;
    }
    while(s[i] >= '0' && s[i] <= '9')
    {
        r = r * 10 + (s[i] - 48);
        i++;
    }
}