#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
