#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "now # is the time for all # good men to come to the # aid of their country";
    char delims[] = "#";
    char *token;

    token = strtok(str, delims);

    while (token != NULL)
    {
        printf("result is \"%s\"\n", token);
        token = strtok(NULL, delims);
    }
    return (0);
}
