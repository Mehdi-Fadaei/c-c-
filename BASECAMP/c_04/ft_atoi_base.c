int valid_base(char *base)
{
    int i;
    int k;

    i = 0;
    k = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[i] != '\0')
    {
        k = i + 1;
        if (base[i] == '-' || base[i] == '+')
            return (0);
        if (base[i] < 32 || base[i] > 126)
            return (0);
        while (base[k] != '\0')
        {
            if (base[i] == base[k])
                return (0);
            k++;
        }
        i++;
    }
    return (1);
}