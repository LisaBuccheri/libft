/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:35:12 by lbuccher          #+#    #+#             */
/*   Updated: 2021/11/06 17:35:16 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc((len + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (s1[++i])
		join[i] = s1[i];
	while (s2[j])
	{
		join[i] = s2[j];
		j++;
		i++;
	}
	join[i] = '\0';
	return (join);
}
