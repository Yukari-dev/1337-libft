/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maoulad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:08:55 by maoulad           #+#    #+#             */
/*   Updated: 2026/10/12 16:08:56 by maoulad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	number_length(long long num)
{
	int	len;

	len = 1;
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	fill_number(char *str, long long num, int len, int neg)
{
	str[len + neg] = '\0';
	while (len > 0)
	{
		str[neg + len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	if (neg)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	num;
	int			len;
	int			neg;

	num = n;
	neg = 0;
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	len = number_length(num);
	str = malloc(len + neg + 1);
	if (!str)
		return (NULL);
	fill_number(str, num, len, neg);
	return (str);
}
