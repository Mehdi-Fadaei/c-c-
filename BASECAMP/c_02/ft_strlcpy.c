unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int srclength;

    i = 0;
    srclength = 0;
    if (size == 0)
    {
        return (0);
    }
    if (size > 0)
    {
        while (src[i] != '\0' && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (src[srclength] != '\0')
    {
        srclength++;
    }
    return (srclength);
}