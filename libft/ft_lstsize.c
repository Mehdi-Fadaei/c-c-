#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		l;

	p = lst;
	l = 0;
	while (p != NULL)
	{
		l += 1;
		p = p -> next;
	}
	return (l);
}
