#include "get_next_line.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((unsigned char *)str)[i] == (unsigned char)ch)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == '\0' && (unsigned char)ch == '\0')
		return ((char *)(str + i));
	return (NULL);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*p;

	i = 0;
	k = 0;
	p = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (NULL == p)
		return (p);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		p[i] = s2[k];
		i++;
		k++;
	}
	p[i] = '\0';
	return (p);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = NULL;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (NULL == sub)
		return (sub);
	if (s[start] == '\0')
	{
		sub[i] = '\0';
		return (sub);
	}
	while (i < len && start < ft_strlen((char *)s))
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
