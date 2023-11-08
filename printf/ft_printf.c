#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	t_data	table;
	size_t	ret;

	if (!format)
		return (-1);
	if ((format[0]) == '%' && !(format[1]))
		return (-1);
	table = malloc(sizeof(struct s_data));
	if (!table)
		return (-1);
	init_table(table);
	va_start(table->ap, format);
	parse((char *)format, table);
	va_end(table->ap);
	ret = table->count;
	free(table);
	return (ret);
}
