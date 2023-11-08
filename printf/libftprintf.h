#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# define HEXLOW "0123456789abcdef"
# define HEXUPP "0123456789ABCDEF"
# define OCT "01234567"
# define DEC "0123456789"
# define BIN "01"
# define FLAGS "0-.*"
# define NUMS "0123456789"

/*
** MANDATORY PART
*/
typedef struct s_data
{
	va_list	ap;
	int		dash;
	int		zero;
	int		period;
	int		asterisk;
	int		width;
	int		precision;
	int		i;
	char	c;
	char	cha;
	int		output;
	size_t	count;
}			*t_data;
int		ft_printf(const char *format, ...);
void	dispatch(char *format, t_data table);
void	read_flags(char *format, t_data table);
void	handle_d(t_data table);
void	ft_putnbr_base(long int nbr, char *base, t_data table);
void	handle_c(t_data table);
void	handle_s(t_data table);
void	handle_p(t_data table);
void	handle_u(t_data table);
void	handle_x(t_data table);
void	handle_bigx(t_data table);
void	handle_perc(char *format, t_data table);
void	handle_spec(long num, t_data table);
void	handle_spec_u(unsigned int num, t_data table);
void	handle_spec_x(unsigned int num, t_data table);
void	handle_spec_bigx(unsigned int num, t_data table);
void	handle_spec_p(unsigned long num, t_data table);
void	handle_spec_c(t_data table);
void	handle_precis(long num, t_data table);
void	parse(char *format, t_data table);
t_data	init_table(t_data table);
t_data	reset_table(t_data table);

#endif