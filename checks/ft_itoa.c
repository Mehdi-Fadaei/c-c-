#include "libft.h"

static long int	ft_iterations(long int n)
{
	int	counter;

	if (n < 0)
	{
		counter = 1;
		n = n * (-1);
	}
	else
		counter = 0;
	while (n >= 10)
	{
		n = n / 10;
		counter++;
	}
	counter++;
	return (counter);
}

static long int	loop_delete(long int first, long int iter)
{
	int			counter;
	long int	result;

	counter = 0;
	result = first;
	while (counter < (iter - 1))
	{
		result = result * 10;
		counter++;
	}
	return (result);
}

static char	*ft_zeros(char *result, long int iter, long int counter)
{
	int	temp;

	temp = iter - 1;
	counter++;
	if (result[0] == '-')
		iter++;
	if (counter < iter)
	{		
		while (temp != 0)
		{
			result[counter] = '0';
			counter++;
			temp--;
		}
	}
	return (result);
}

static char	*ft_sol(long int num, char *result, long int counter)
{
	long int	l_d;
	long int	iterations;
	long int	first_digit;

	l_d = 0;
	iterations = ft_iterations(num);
	first_digit = num;
	while (num != 0)
	{
		first_digit = num;
		while (first_digit >= 10)
			first_digit = first_digit / 10;
		result[counter] = (char)first_digit + 48;
		l_d = loop_delete(first_digit, iterations);
		if (l_d == num)
			ft_zeros(result, iterations, counter);
		num = num - l_d;
		iterations--;
		counter++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char		*result;
	long int	num;
	long int	counter;

	num = n;
	result = ft_calloc(ft_iterations(n) + 1, 1);
	if (!result)
		return (result);
	if (num == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	counter = 0;
	if (num < 0)
	{
		result[0] = '-';
		num = num * (-1);
		counter++;
	}
	result = ft_sol(num, result, counter);
	return (result);
}
