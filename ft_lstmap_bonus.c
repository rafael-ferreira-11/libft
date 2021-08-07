#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*retorno;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	retorno = 0;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			while (retorno)
			{
				temp = retorno->next;
				del(retorno->content);
				free(retorno);
				retorno = temp;
			}
		}
		ft_lstadd_back(&retorno, temp);
		lst = lst->next;
	}
	return (retorno);
}
