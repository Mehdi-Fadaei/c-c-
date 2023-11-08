#include <unistd.h>

void	*ft_memchr(const void *str, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (((unsigned char *)str)[i] == (unsigned char)ch)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
