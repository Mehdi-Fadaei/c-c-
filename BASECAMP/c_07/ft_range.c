#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *arr;

    i = 0;
    if (min >= max)
        return (NULL);
    if (!(arr = (int *)malloc((max - min) * sizeof(int))))
        return (NULL);
    while (min < max)
    {
        arr[i] = min;
        i++;
        min++;
    }
    return (arr);
}
