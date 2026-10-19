/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maoulad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:08:55 by maoulad           #+#    #+#             */
/*   Updated: 2026/10/12 16:08:56 by maoulad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*ft_move_forward(unsigned char *d,
							const unsigned char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}

static void	*ft_move_backward(unsigned char *d,
							const unsigned char *s, size_t len)
{
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
	return ((void *)d);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0 || dst == src)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
		return (ft_move_forward(d, s, len));
	else
		return (ft_move_backward(d, s, len));
}
