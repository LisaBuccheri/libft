#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*list;
	t_list	*list2;

	if (!*lst)
		return ;
	list = *lst;
	while (list)
	{
		list2 = list->next;
		ft_lstdelone(list, del);
		list = list2;
	}
	*lst = NULL;
}
