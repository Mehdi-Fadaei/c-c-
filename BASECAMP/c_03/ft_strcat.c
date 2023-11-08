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
