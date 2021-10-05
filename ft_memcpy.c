#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (dest == src)
		return (dest);
	while (n)
	{
		*d = *s;
		n--;
		d++;
		s++;
	}
	return (dest);
}
