/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <ferreira@asia.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:44:10 by user42            #+#    #+#             */
/*   Updated: 2021/08/08 13:44:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*retorno;
	t_list	*temp;

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
