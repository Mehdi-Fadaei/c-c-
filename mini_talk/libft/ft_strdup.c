

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*dup;
	size_t	l;

	l = 0;
	while (src[l] != '\0')
		l++;
	dup = (char *)malloc(sizeof(char *) * (l + 1));
	if (NULL == dup)
		return (dup);
	i = 0;
	while (i < l)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
