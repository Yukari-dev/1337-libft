/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maoulad <maoulad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:08:55 by maoulad           #+#    #+#             */
/*   Updated: 2026/10/19 10:50:27 by maoulad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned char	*p;
	size_t			total_size;
	size_t			i;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (size && count > 18446744073709551615UL / size)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	p = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
