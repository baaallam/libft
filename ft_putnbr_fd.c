/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:25 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/02 02:12:11 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	n;
	long	d;

	n = nb;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	d = 1;
	while (d <= n / 10)
		d *= 10;
	while (d)
	{
		ft_putchar_fd(n / d + '0', fd);
		n %= d;
		d /= 10;
	}
}
