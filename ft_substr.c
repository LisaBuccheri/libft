/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:37:12 by lbuccher          #+#    #+#             */
/*   Updated: 2021/11/06 17:37:16 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start - 1)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) - 1 < start)
		return (ft_strdup(""));
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (len-- && start < ft_strlen(s) && s[i])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
