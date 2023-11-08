#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	if (NULL == lst)
		return (lst);
	new_lst = NULL;
	node = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst -> content));
		if (NULL == node)
		{
			ft_lstclear(&new_lst, del);
			return (node);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst -> next;
	}
	return (new_lst);
}
