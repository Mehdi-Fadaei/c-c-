#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long x;

    x = nb;
    if (x < 0)
    {
        x = x * (-1);
        ft_putchar('-');
    }
    if (x >= 10)
    {
        ft_putnbr(x / 10);
        ft_putnbr(x % 10);
    }
    else
    {
        ft_putchar(x + '0');
    }
}
