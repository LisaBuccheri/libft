/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:38:05 by lbuccher          #+#    #+#             */
/*   Updated: 2021/11/06 16:44:44 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chara;

	str = (unsigned char *)s;
	chara = (unsigned char) c;
	while (n)
	{
		if (*str == chara)
			return (str);
		n--;
		str++;
	}
	return (NULL);
}
