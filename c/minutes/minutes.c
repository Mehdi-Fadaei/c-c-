#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int minutes;
    double years;
    double days;
    double mins_in_year;

    printf("Enter number of minutes: ");

    scanf("%d", &minutes);

    mins_in_year = (60 * 24 * 365);
    years = (minutes / mins_in_year);
    days = (minutes / 60.0) / 24.0;

    printf("%d minutes is %f years %f days\n", minutes, years, days);

    return (0);
}