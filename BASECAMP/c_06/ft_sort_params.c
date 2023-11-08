#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

void sort_arr(char *arr[], int length)
{
    int i;
    int k;
    char *temp;

    i = 1;
    while (i < length)
    {
        k = i + 1;
        while (k < length)
        {
            if (ft_strcmp(arr[k], arr[i]) < 0)
            {
                temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
            k++;
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    sort_arr(argv, argc);
    while (i < argc)
    {
        ft_putstr(argv[i]);
        i++;
    }
    return (0);
}
