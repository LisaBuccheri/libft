/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:33:57 by lbuccher          #+#    #+#             */
/*   Updated: 2021/11/06 17:34:06 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (s[i] != c)
		nb++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			nb++;
		i++;
	}
	return (nb);
}

static char	**null_return(int i, char **t)
{
	while (i--)
		free(t[i]);
	return (NULL);
}

static char	**alloc_memory(int len, char **t, char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	while (*s)
	{	
		j = 0;
		len = 0;
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		while (*(s + len) != c && *(s + len))
			len++;
		t[i] = ft_calloc ((len + 1), sizeof(char));
		if (!t[i])
			return (null_return(i, t));
		while (*s && *s != c)
		{
			t[i][j++] = *(s++);
			if (*s == c)
				t[i++][j] = '\0';
		}
	}
	return (t);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		len;

	len = 0;
	if (!s)
		return (NULL);
	t = (char **)ft_calloc(count(s, c) + 1, sizeof(char *));
	if (!t)
		return (NULL);
	t = alloc_memory(len, t, s, c);
	if (!t)
	{
		free(t);
		return (NULL);
	}
	t[count(s, c)] = NULL;
	return (t);
}
