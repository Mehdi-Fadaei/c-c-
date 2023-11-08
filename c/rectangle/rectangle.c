#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = 0.0;
    double area = 0.0;
    (void)argc;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("Width is: %.2f\n", width);
    printf("Height is: %.2f\n", height);
    printf("Perimeter is: %.2f\n", perimeter);
    printf("Area is: %.2f\n", area);

    return (0);
}