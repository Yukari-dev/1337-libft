/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maoulad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:08:55 by maoulad           #+#    #+#             */
/*   Updated: 2026/10/12 16:08:56 by maoulad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	strlength(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (strlength(s1) + strlength(s2) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < strlength(s1))
	{
		ret[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < strlength(s2))
	{
		ret[i + strlength(s1)] = s2[i];
		i++;
	}
	ret[strlength(s1) + strlength(s2)] = '\0';
	return (ret);
}
