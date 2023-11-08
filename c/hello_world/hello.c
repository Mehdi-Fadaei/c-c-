#include <stdio.h>

int main()
{
    printf("Hello Wolfsburg 42\n");
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};
    float f_arr[6];

    f_arr[0] = 25.3;
    f_arr[4] = 34.2;
    printf("%c, %.2f\n", vowels[4], f_arr[0]);
}