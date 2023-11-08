#include <unistd.h>

void ft_putnbr(int nb)
{
    long x;
    char c;

    x = nb;
    if (x < 0)
    {
        x = x * (-1);
        write(1, "-", 1);
    }
    if (x >= 10)
    {
        ft_putnbr(x / 10);
        ft_putnbr(x % 10);
    }
    else
    {
        c = x + '0';
        write(1, &c, 1);
    }
}
