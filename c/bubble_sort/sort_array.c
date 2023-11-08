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

void sort_array(int size, int *arr)
{
    int tmp;
    int i;
    int swap;

    swap = 1;
    while (swap == 1)
    {
        swap = 0;
        i = 0;
        while (i < size - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swap = 1;
            }
            i++;
        }
    }
}

int main(void)
{
    int arr[10] = {33, 22, 8, 10, 7, 96, 100, 23, 22, 34};
    int size = 10;
    int i;

    i = 0;
    while (i < size)
    {
        ft_putnbr(arr[i]);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
    sort_array(size, arr);
    i = 0;
    while (i < size)
    {
        ft_putnbr(arr[i]);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
}
