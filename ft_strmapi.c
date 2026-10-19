/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maoulad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:08:55 by maoulad           #+#    #+#             */
/*   Updated: 2026/10/12 16:08:56 by maoulad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[src_len])
		src_len++;
	res = malloc(sizeof(char) * (src_len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
