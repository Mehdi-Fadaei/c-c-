#include <stdio.h>
#include <stdlib.h>

int	stringLength(const char *string);

int	main(void)
{
	printf("%d \n", stringLength("string Length test"));
	printf("%d \n", stringLength(""));
	printf("%d \n", stringLength("igor"));

	return (0);
}

int	stringLength(const char *string)
{
	const char *lastAddress = string; //Create own pointer to use arithmetic

	while (*lastAddress)
		lastAddress++;

	return (lastAddress - string);
}
