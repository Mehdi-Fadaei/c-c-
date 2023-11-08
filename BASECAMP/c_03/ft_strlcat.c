unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int k;
    unsigned int s;

    i = 0;
    k = 0;
    s = 0;
    while (src[s] != '\0')
    {
        s++;
    }
    while (dest[i] != '\0')
    {
        i++;
    }
    s = s + i;
    while (src[k] != '\0' && k < (size - i - 1))
    {
        dest[i] = src[k];
        i++;
        k++;
    }
    dest[i] = '\0';
    return (s);
}
//Moulinette error