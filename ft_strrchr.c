/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:36:48 by lbuccher          #+#    #+#             */
/*   Updated: 2021/11/06 17:36:51 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	while (len > 0 && s[len] != (unsigned char) c)
		len--;
	if (s[len] == (unsigned char) c)
		return ((char *)s + len);
	return (NULL);
}
