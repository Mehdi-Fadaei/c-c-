#include "minitalk.h"

static void	check_handles(char *new, int *mask, int *i, int pid)
{
	if (new[(*i)])
	{
		if (*mask == 0)
		{
			(*i)++;
			*mask = 128;
		}
		if (*mask >= 1)
		{
			if (*mask & new[(*i)])
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			*mask = *mask >> 1;
		}
	}
}

static void	telegram(int id, char *msg)
{
	static int		mask = 128;
	static int		pid = 0;
	static int		i = 0;
	static char		new[2048];

	if (id)
		pid = id;
	if (msg)
		ft_strlcpy(new, msg, 2048);
	check_handles(new, &mask, &i, pid);
	if (!(new[i]))
		terminate(pid);
}

static void	one(int signum)
{
	(void)signum;
	telegram(0, 0);
}

static void	zero(int signum)
{
	(void)signum;
	ft_putstr_fd("Message delivered\n", 1);
	exit(EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	if (argc != 3 || ft_atoi(argv[1]) < 1)
	{
		ft_putstr_fd("Incorrect arguments\n", 1);
		return (1);
	}
	signal(SIGUSR1, one);
	signal(SIGUSR2, zero);
	ft_putstr_fd("PID : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	telegram(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}
