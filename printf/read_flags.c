#include "libftprintf.h"

static char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((unsigned char *)str)[i] == (unsigned char)ch)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == '\0' && (unsigned char)ch == '\0')
		return ((char *)(str + i));
	return (NULL);
}

static void	handle_asterisk(t_data table)
{
	if (table->period)
	{
		table->precision = va_arg(table->ap, int);
	}
	else
	{
		table->width = va_arg(table->ap, int);
		if (table->width < 0)
		{
			(table->width) *= -1;
			table->dash = 1;
			table->zero = 0;
		}
	}
	(table->i)++;
}

static void	handle_nums(char *format, t_data table)
{
	int	res;

	res = 0;
	while (ft_strchr(NUMS, format[table->i]))
	{
		res = res * 10 + (format[table->i] - '0');
		(table->i)++;
	}
	if (table->period)
		table->precision = res;
	else
		table->width = res;
}

void	read_flags(char *format, t_data table)
{
	while (ft_strchr(FLAGS, format[table->i])
		|| ft_strchr(NUMS, format[table->i]))
	{
		if (format[table->i] == '-')
		{
			table->dash = 1;
			(table->i)++;
		}
		if (format[table->i] == '0')
		{
			table->zero = 1;
			(table->i)++;
		}
		if (format[table->i] == '.')
		{
			table->period = 1;
			(table->i)++;
		}
		if (format[table->i] == '*')
			handle_asterisk(table);
		if (ft_strchr(NUMS, format[table->i]))
			handle_nums(format, table);
	}
}
