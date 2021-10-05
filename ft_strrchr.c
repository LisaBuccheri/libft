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
