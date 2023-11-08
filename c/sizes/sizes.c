#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	x;
	int	*p;

	x = 10;
	p = &x;
	fprintf(stdout, "Sizes of some common data types in current compiler\n");
	printf("Size of int is %d bytes\n", (int) sizeof(int));
	printf("Size of unsigned int is %d bytes\n", (int) sizeof(unsigned int));
	printf("Size of char is %d bytes\n", (int) sizeof(char));
	printf("Size of float is %d bytes\n", (int) sizeof(float));
	printf("Size of double is %d bytes\n", (int) sizeof(double));
	printf("Size of long is %d bytes\n", (int) sizeof(long));
	printf("Size of long long is %d bytes\n", (int) sizeof(long long));
	printf("Size of pointer is %d bytes\n", (int) sizeof(p));
	printf("Size of short is %d bytes\n", (int) sizeof(short));
	fprintf(stdout, "Unsigned short %d bytes\n", (int) sizeof(unsigned short));
	return (0);
}
