#include <unistd.h>

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	while (str[i] != '\0')
	{
		if (((unsigned char *)str)[i] == (unsigned char)ch)
			p = ((char *)(str + i));
		i++;
	}
	if (str[i] == '\0' && (unsigned char)ch == '\0')
		return ((char *)(str + i));
	if (p)
		return (p);
	return (NULL);
}
