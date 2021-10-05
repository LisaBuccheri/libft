#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*list;
	t_list	*elem;

	if (!lst)
		return (NULL);
	elem = ft_lstnew(f(lst->content));
	if (!elem)
		return (NULL);
	list = elem;
	lst = lst->next;
	while (lst != NULL)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&list, elem);
	}
	return (list);
}
