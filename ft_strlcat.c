/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:35:28 by lbuccher          #+#    #+#             */
/*   Updated: 2021/11/06 17:35:32 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size == 0)
		return (s);
	if (size - 1 < d)
		return (s + size);
	while (d + i < size - 1 && src[i])
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
