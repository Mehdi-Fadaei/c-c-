

#include "minitalk.h"

void	terminate(int pid)
{
	static int	i = 0;

	if (i < 8)
	{
		kill(pid, SIGUSR2);
		i++;
	}
	else
		i = 0;
}
