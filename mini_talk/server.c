#include "minitalk.h"

static void	straddchar(int res, int pid)
{
	static char	msg[2048];
	static int	i = 0;

	if (res)
	{
		msg[i] = res;
		i++;
		msg[i] = '\0';
	}
	else
	{
		kill(pid, SIGUSR2);
		ft_printf("%s\nReceived from: %d\n", msg, pid);
		msg[0] = '\0';
		i = 0;
	}
}

static void	sig_handl(int signum, siginfo_t *info, void *unused)
{
	static int	result = 0;
	static int	counter = 128;
	static int	bit = 0;

	(void)unused;
	if (signum == SIGUSR1)
	{
		result += counter;
		counter /= 2;
		kill(info->si_pid, SIGUSR1);
	}
	else if (signum == SIGUSR2)
	{
		counter /= 2;
		kill(info->si_pid, SIGUSR1);
	}
	bit++;
	if (bit == 8)
	{
		straddchar(result, info->si_pid);
		bit = 0;
		counter = 128;
		result = 0;
	}
}

int	main(void)
{
	struct sigaction	sa_sig;

	sa_sig.sa_flags = SA_SIGINFO;
	sa_sig.sa_sigaction = sig_handl;
	sigaction(SIGUSR1, &sa_sig, NULL);
	sigaction(SIGUSR2, &sa_sig, NULL);
	ft_putstr_fd("PID : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	while (1)
		pause();
	return (0);
}
