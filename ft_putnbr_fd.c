/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhakimi <ayhakimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:57:32 by ayhakimi          #+#    #+#             */
/*   Updated: 2024/11/14 22:06:52 by ayhakimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l;

	l = n;
	if (fd < 0)
		return ;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l = -l;
	}
	if (l > 9)
		ft_putnbr_fd(l / 10, fd);
	ft_putchar_fd((l % 10) + '0', fd);
}
