#include <stdio.h>

void ft_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(void)
{
    int x = 5;
    int y = 20;

    printf("Before swap x = %d and y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After swap x = %d and y = %d\n", x, y);

    return (0);
}
