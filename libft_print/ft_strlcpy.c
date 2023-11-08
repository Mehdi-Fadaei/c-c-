#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	srclength;

	i = 0;
	srclength = ft_strlen((char *)src);
	if (destsize == 0)
	{
		return (srclength);
	}
	if (destsize > 0)
	{
		while (src[i] != '\0' && i < (destsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclength);
}
