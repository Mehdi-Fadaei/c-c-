#include "libftprintf.h"

t_data	reset_table(t_data table)
{
	table->dash = 0;
	table->zero = 0;
	table->period = 0;
	table->asterisk = 0;
	table->width = 0;
	table->output = 0;
	table->precision = 0;
	return (table);
}
