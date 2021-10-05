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
