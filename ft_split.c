#include "libft.h"

int count(const char *s,char c)
{
    int i = 0,count = 0;

        while(s[i])
        {
            if(s[i] != c && (s[i + 1] == c || s[i+1] == '\0'))
                count++;
            i++;
        }
   return count;
}
void ft_fill(char const *s, char **p, char cc,int count) {
  int j = 0;
    int i = 0;
    int f;
    while (j < count && s[i]) {
      while(s[i] == cc)
      i++;
        f = 0;
        while(s[i] && s[i] != cc)
            p[j][f++] = s[i++];
        p[j][f] = '\0';
        j++;
        if(s[i] == cc)
            i++;
    }
    p[j] = NULL;
}
char	**ft_split(char const *str, char c)
{
    int ct = count(str, c);
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

        sp[j] = (char *)malloc((l + 1) * sizeof(char));
        if (!sp[j]) {
          int k = 0;
          while ( k < j)
                free(sp[k]);
          free(sp);
          k++;
          return NULL;
            }
        j++;
        if(str[i] == c)
            i++;
    }
    ft_fill(str,sp,c,ct);
   
    return sp;
}
/*#include <stdio.h>
#include <stdlib.h>
int main() {
  char *s = "hello lol lalala";
  char **pp = ft_split(s,'o');
  for (int i = 0; i < 3; i++) {
    printf("%s\n",pp[i]);
  }
  }*/