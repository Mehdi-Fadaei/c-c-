#include "libft.h"
#include <stdio.h>

int	main(void)
{
	FILE	*pfile;
	int		fd;
	int		c;

	pfile = fopen("test.txt", "w+");
	if (NULL == pfile)
		return (-1);
	fd = fileno(pfile);
	ft_putchar_fd('Q', fd);
	rewind(pfile);
	c = fgetc(pfile);
	if (c != EOF)
		printf("%c", c);
	fclose(pfile);
	remove("test.txt");
	pfile = NULL;
	return (0);
}
