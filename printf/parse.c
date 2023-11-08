#include "libftprintf.h"

void	parse(char *format, t_data table)
{
	while (format[table->i] != '\0')
	{
		if (format[table->i] == '%')
		{
			(table->i)++;
			if (format[table->i] != '%' && format[table->i] != ' ')
			{
				read_flags((char *)format, table);
				dispatch((char *)format, table);
			}
			else
				handle_perc(format, table);
		}
		else
		{
			table->c = format[table->i];
			table->count += write(1, &(table->c), 1);
			(table->i)++;
		}
	}
}
