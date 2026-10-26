/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maoulad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:08:55 by maoulad           #+#    #+#             */
/*   Updated: 2026/10/12 16:08:56 by maoulad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*cpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	to_copy;
	char	*target;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (!dest && size == 0)
		return (src_len);
	dest_len = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	if (dest_len != size)
	{
		to_copy = size - dest_len - 1;
		if (to_copy > src_len)
			to_copy = src_len;
		target = dest + dest_len;
		cpy(target, src, to_copy);
		target[to_copy] = '\0';
	}
	return (dest_len + src_len);
}
