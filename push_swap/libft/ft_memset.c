#include <unistd.h>

void	*ft_memset(void *str, int ch, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		((unsigned char *)str)[i] = ch;
		i++;
	}
	return (str);
}
