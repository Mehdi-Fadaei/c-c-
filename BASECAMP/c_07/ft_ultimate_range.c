#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *arr;

    i = 0;
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    arr = (int *)malloc(sizeof(int) * (max - min));
    if (arr == NULL)
        return (-1);
    while (min < max)
    {
        arr[i] = min;
        i++;
        min++;
    }
    *range = arr;
    return (i);
}
