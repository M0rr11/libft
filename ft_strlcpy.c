#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size) {
  size_t i;
  i = 0;

  while (src[i] && i < size - 1) {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return (ft_strlen(src));
  }
 #include <stdio.h>
 int main()
 {
    char dst[3];
    const char *src = "hi";
    printf("%zu\n",ft_strlcpy(dst,src,1));
 }