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

char *ft_strdup(char *src)
{
    int i;
    char *dup;
    int length;

    length = ft_strlen(src);
    if (!(dup = (char *)malloc(sizeof(*dup) * (length + 1))))
        return (NULL);
    i = 0;
    while (i < length)
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
