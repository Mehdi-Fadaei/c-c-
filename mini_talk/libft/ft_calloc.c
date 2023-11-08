#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	p = NULL;
	p = malloc(n * size);
	if (NULL == p)
		return (p);
	ft_bzero(p, n * size);
	return (p);
}
