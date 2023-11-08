

#include <unistd.h>

void	ft_bzero(void *str, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		((char *)str)[i] = '\0';
		i++;
	}
}
