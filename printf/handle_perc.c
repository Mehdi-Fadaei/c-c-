#include "libftprintf.h"

void	handle_perc(char *format, t_data table)
{
	while (format[table->i] == ' ')
		(table->i)++;
	table->count += write(1, "%", 1);
	(table->i)++;
	reset_table(table);
}
