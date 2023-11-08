#include "libftprintf.h"

static void	zero_fill(unsigned int num, t_data table)
{
	while (table->width && table->width > (table->output))
	{
		if (table->period && !(table->precision))
		{
			table->count += write(1, " ", 1);
			(table->width)--;
		}
		else
		{
			table->count += write(1, "0", 1);
			(table->width)--;
		}
	}
	ft_putnbr_base(num, DEC, table);
}

void	handle_u(t_data table)
{
	unsigned int	num;
	unsigned int	x;

	num = va_arg(table->ap, unsigned int);
	x = num;
	if (num == 0)
		(table->output)++;
	while (x != 0)
	{
		x /= 10;
		(table->output)++;
	}
	if (table->period && !(table->precision) && num == 0)
		table->output = 0;
	if (table->zero && !((table->precision) > 0) && !(table->dash))
		zero_fill(num, table);
	else
		handle_spec_u(num, table);
	(table->i)++;
	reset_table(table);
}