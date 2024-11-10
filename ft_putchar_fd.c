/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyx <nyx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:25 by nyx               #+#    #+#             */
/*   Updated: 2024/11/04 14:48:26 by nyx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// #include <string.h>
// int main()
// {
// 	int fd;

// 	fd = open("./open_test", O_CREAT | O_RDWR, 0644);
// 	printf("%d\n", fd);
// 	write(fd, "HELLO _ WORLD", strlen("HELLO _ WORLD"));
// 	// ft_putstr_fd("hello, world\n", fd);
// }