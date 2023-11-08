#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO = 10,
        EBAY,
        MICRO
    };

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("Value of xerox is: %d\n", xerox);
    printf("Value of google is: %d\n", google);
    printf("Value of ebay is: %d\n", ebay);

    return (0);
}
