/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:36:20 by lbuccher          #+#    #+#             */
/*   Updated: 2021/11/06 16:42:51 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long int n)
{
	int	nb;

	nb = 0;
	if (n <= 0)
	{
		n *= -1;
		nb++;
	}
	while (n > 0)
	{
		n /= 10;
		nb++;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	n2;
	int			i;
	int			stop;

	n2 = (long int) n;
	i = count(n2);
	str = malloc((i + 1) * sizeof(char));
	stop = 0;
	if (!str)
		return (NULL);
	if (n2 < 0)
	{
		str[0] = '-';
		n2 *= -1;
		stop = 1;
	}
	while (i > stop)
	{
		str[i - 1] = n2 % 10 + '0';
		n2 /= 10;
		i--;
	}
	str[count(n)] = '\0';
	return (str);
}
