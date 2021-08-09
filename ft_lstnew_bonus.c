/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <ferreira@asia.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:44:07 by user42            #+#    #+#             */
/*   Updated: 2021/08/08 13:44:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
