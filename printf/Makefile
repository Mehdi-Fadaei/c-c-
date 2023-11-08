CC		= clang
CFLAGS	= -Wall -Wextra -Werror -g

AR		= ar rcs
RM		= rm -f

NAME	= libftprintf.a
INCL	= libftprintf.h

SRC		= ft_printf.c dispatch.c handle_d.c ft_putnbr_base.c handle_c.c \
			handle_s.c handle_p.c handle_u.c handle_x.c handle_bigx.c \
			handle_perc.c init_table.c reset_table.c parse.c read_flags.c \
			handle_spec.c handle_spec_u.c handle_spec_x.c handle_spec_bigx.c \
			handle_spec_c.c handle_spec_p.c handle_precis.c

OBJ		= ${SRC:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)
			$(RM) $(OBJ)

main:
			$(CC) $(CFLAGS) -c main.c
			$(CC) $(CFLAGS) main.o -I. $(NAME)
			$(RM) main.o

clean:		
			$(RM) $(OBJ) a.out

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re