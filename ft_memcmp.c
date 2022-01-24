/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:38:14 by lbuccher          #+#    #+#             */
/*   Updated: 2021/11/06 16:44:52 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	while (n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char) str2[i]);
		n--;
		i++;
	}
	return (0);
}
