#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*retorno;

	retorno = (t_list *)malloc(sizeof(*retorno));
	if (!retorno)
		return (0);
	retorno->content = content;
	retorno->next = 0;
	return (retorno);
}
