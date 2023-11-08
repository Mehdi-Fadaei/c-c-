all:
		gcc -I. -c unity.c check_libft.c 
		gcc unity.o check_libft.o libft.a -lbsd
		rm -f *.o

bonus:	
		gcc -I. -c unity.c check_bonus.c 
		gcc unity.o check_bonus.o libft.a -lbsd -o b.out
		rm -f *.o

clean:
		rm -f *.o a.out b.out libft.a libft.h

.PHONY: clean all bonus