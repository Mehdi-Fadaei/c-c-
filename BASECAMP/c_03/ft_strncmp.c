int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    if (n == 0)
    {
        return (0);
    }
    while (s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        if ((s1[i] - s2[i]) > 0)
        {
            return (1);
        }
        if ((s1[i] - s2[i]) < 0)
        {
            return (-1);
        }
        i++;
    }
    if (i != n)
    {
        return (s1[i] - s2[i]);
    }
    return (0);
}
