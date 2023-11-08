#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

int length(char **strs, int size, char *sep)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + (size - 1) * ft_strlen(sep) + 1;
	return (length);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * length(strs, size, sep));
	if (str == NULL)
		return (str);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < (size - 1))
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
