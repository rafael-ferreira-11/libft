/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <ferreira@asia.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:42:34 by user42            #+#    #+#             */
/*   Updated: 2021/08/08 13:42:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;
	int		offset;

	index = 0;
	offset = 1;
	if (!dest && !src)
		return (0);
	if ((size_t)src < (size_t)dest)
	{
		index = n - 1;
		offset = -1;
	}
	while (index < n)
	{
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
		index += offset;
	}
	return (dest);
}
