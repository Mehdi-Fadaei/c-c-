#include "libftprintf.h"

void	handle_c(t_data table)
{
	table->cha = (char)va_arg(table->ap, int);
	table->output = 1;
	handle_spec_c(table);
	(table->i)++;
	reset_table(table);
}
