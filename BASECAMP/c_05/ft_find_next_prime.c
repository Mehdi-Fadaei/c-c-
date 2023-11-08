int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    if (nb == 2)
        return (1);
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    int i;
    long x;

    x = nb;
    i = 0;
    if (x <= 2)
        return (2);
    while (ft_is_prime(x + i) != 1)
    {
        i++;
    }
    return (x + i);
}
