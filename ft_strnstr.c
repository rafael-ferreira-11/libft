/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <ferreira@asia.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:41:14 by user42            #+#    #+#             */
/*   Updated: 2021/08/08 13:41:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	idx_b;
	size_t	idx_l;

	if (!*little)
		return ((char *)big);
	idx_b = 0;
	while (big[idx_b])
	{
		idx_l = 0;
		while (big[idx_b + idx_l] == little[idx_l] && (idx_b + idx_l) < len)
		{
			if (big[idx_b + idx_l] == '\0' && little[idx_l] == '\0')
				return ((char *)&big[idx_b]);
			idx_l++;
		}
		if (little[idx_l] == '\0')
			return ((char *)&big[idx_b]);
		idx_b++;
	}
	return (0);
}
