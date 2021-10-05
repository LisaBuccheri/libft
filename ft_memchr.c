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
