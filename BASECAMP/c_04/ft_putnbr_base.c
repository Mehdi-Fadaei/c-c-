#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

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

void ft_putnbr_base(int nbr, char *base)
{
    long x;
    int baza;

    x = nbr;
    baza = ft_strlen(base);
    if (valid_base(base) != 1)
        return;
    if (x < 0)
    {
        x = x * (-1);
        ft_putchar('-');
    }
    if (x >= baza)
    {
        ft_putnbr_base(x / baza, base);
        ft_putnbr_base(x % baza, base);
    }
    else
    {
        ft_putchar(base[x]);
    }
}
