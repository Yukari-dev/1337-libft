/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maoulad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:08:55 by maoulad           #+#    #+#             */
/*   Updated: 2026/10/12 16:08:56 by maoulad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	fill_number(int fd, char *buf, long long num, int neg)
{
	size_t	i;

	i = 0;
	while (num != 0)
	{
		buf[i] = (num % 10) + '0';
		i++;
		num /= 10;
	}
	if (neg)
		write(fd, "-", 1);
	while (i > 0)
	{
		write(fd, &buf[--i], 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char		buf[12];
	long long	num;
	int			neg;

	neg = 0;
	num = n;
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	fill_number(fd, buf, num, neg);
}
