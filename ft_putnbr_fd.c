#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
  long l = n;
  if (l < 0) {
    ft_putchar_fd('-', fd);
    l = -l;
  }
  if (l > 9)
    ft_putnbr_fd(l / 10, fd);
  ft_putchar_fd((l % 10) + '0',fd);
}
