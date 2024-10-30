#include "libft.h"

int count(char *s)
{
    int i = 0,count = 0;

        while(s[i])
        {
            if(s[i] != ' ' && s[i] != '\t' && (s[i+1] == ' ' || s[i+1] == '\t' || s[i+1] == '\0'))
                count++;
            i++;
        }
   return count;
}
char	**ft_split(char const *str, char c)
{
    int ct = count(str);
    char **sp = (char **) malloc((ct + 1) * sizeof(char *));
    if(sp == NULL)
        return NULL;

    int i = 0,j = 0,l;
    while(str[i] == c)
      i++;
    while(j < ct && str[i])
    {
        l = 0;
        while(str[i + l] && str[i + l] != c)
            l++;
        
        sp[j] = (char *) malloc((l + 1) * sizeof(char));
        j++;
        if(str[i] == ' ' || str[i] == '\t')
            i++;
    }
    j = 0;
    i = 0;
    int f;
    while(str[i] == ' ' || str[i] == '\t')
      i++;
    while(j < ct && str[i])
    {
        f = 0;
        while(str[i] && str[i] != c)
            sp[j][f++] = str[i++];
        sp[j][f] = '\0';
        j++;
        if(str[i] == c)
            i++;
    }
    sp[j] = NULL; 
    return sp;
}
