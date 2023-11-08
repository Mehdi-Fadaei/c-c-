#include "libftprintf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static void	conversion(long nbr, char *base, t_data table)
{
	long	x;
	int		baza;

	x = nbr;
	baza = ft_strlen(base);
	if (x < 0)
	{
		x = x * (-1);
		table->c = '-';
		table->count += write(1, &(table->c), 1);
	}
	if (x >= baza)
	{
		conversion(x / baza, base, table);
		conversion(x % baza, base, table);
	}
	else
	{
		table->c = base[x];
		table->count += write(1, &(table->c), 1);
	}
}

void	ft_putnbr_base(long nbr, char *base, t_data table)
{
	if (table->period && !(table->precision) && nbr == 0)
		return ;
	conversion(nbr, base, table);
}
